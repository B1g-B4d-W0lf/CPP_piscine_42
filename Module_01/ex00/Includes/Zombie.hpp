#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void 	randomChump(std::string name);
		Zombie*	newZombie(std::string name);
		void	setname(std::string name);

	private:
		std::string name;

};

#endif