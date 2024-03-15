#include "Includes/Character.hpp"

int	Character::nbc = 0;
int Character::fl = 0;
AMateria* Character::floor[50] = {NULL};

Character::Character()
{
	nbc++;
	std::cout << "Character constructor called" << std::endl;
	name = "Default";
	in = 0;
	for (int i = 0; i < 4; i++)
		items[i] = NULL;
}

Character::Character(std::string naming)
{
	nbc++;
	std::cout << "Character naming constructor called" << std::endl;
	name = naming;
	in = 0;
	for (int i = 0; i < 4; i++)
		items[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (items[i])
			delete items[i];
	}
	nbc--;
	if (nbc == 0)
	{
		for (int i = 0; i < 50; i++)
		{
			if (floor[i])
				delete floor[i];
		}
	}
}

Character::Character(Character& bis)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = bis;
}

Character& Character::operator=(Character& bis)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i])
			delete items[i];
		if (bis.getInventory(i))
			this->items[i] = bis.getInventory(i)->clone();
	}
	name = bis.getName() + "Copy";
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		if (in < 4)
		{
			items[in] = m;
			in++;
			return ;
		}
		if (in == 4)
			std::cout << "Inventory is full." << std::endl;
	}
	delete m;
}

void Character::unequip(int idx)
{
	int i = 0;
	if (items[idx])
	{
		while (floor[i] != NULL && i < 50)
			i++;
		if (i != 50)
		{
			floor[i] = items[idx];
		}
		else if (i == 50)
		{
			delete floor[fl];
			floor[fl] = items[idx];
			fl++;
			if (fl == 50)
				fl = 0;
		}
		items[idx] = NULL;
		in --;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->items[idx])
	{
		std::cout << "in there" << std::endl;
		items[idx]->use(target);
		delete items[idx];
		items[idx] = NULL;
		in--;
	}
	
}

AMateria* Character::getInventory(int index)
{
	return (items[index]);
}
