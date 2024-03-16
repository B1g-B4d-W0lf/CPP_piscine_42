#include "Includes/Character.hpp"
#include "Includes/Cure.hpp"
#include "Includes/Ice.hpp"
#include "Includes/MateriaSource.hpp"

int main()
{
	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;

	std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;

	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	ICharacter* Wizard = new Character("Wizard");

	AMateria* temp;
	temp = source->createMateria("ice");
	Wizard->equip(temp);
	temp = source->createMateria("cure");
	Wizard->equip(temp);
	temp = source->createMateria("ice");
	Wizard->equip(temp);
	temp = source->createMateria("cure");
	Wizard->equip(temp);
	temp = source->createMateria("ice");
	Wizard->equip(temp);

	ICharacter* Victim = new Character("Victim");
	std::cout << std::endl;
	Wizard->use(0, *Victim);
	Wizard->use(1, *Victim);
	Wizard->unequip(3);
	Wizard->unequip(2);

	temp = source->createMateria("ice");
	Wizard->equip(temp);
	
	std::cout << std::endl;
	delete Victim;
	delete Wizard;
	delete source;

	return 0;
}
