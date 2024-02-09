#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setname(std::string name);
		Zombie*	zombieHorde(int N, std::string name);

	private:
		std::string name;

};

#endif