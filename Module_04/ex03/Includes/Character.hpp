#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
		Character();
		~Character();
		Character(Character& bis);
		Character& operator=(Character& bis);
		Character(std::string naming);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getInventory(int index);

		static AMateria		*floor[50];
		static int			fl;
		static int			nbc;

	private :
		AMateria	*items[4];
		std::string	name;
		int			in;

};

#endif