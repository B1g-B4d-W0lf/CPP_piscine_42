#include "Includes/Animal.hpp"
#include "Includes/Dog.hpp"
#include "Includes/Cat.hpp"
#include "Includes/WrongAnimal.hpp"
#include "Includes/WrongCat.hpp"

int main()
{
	const Animal* animal[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	std::cout << std::endl;
	animal[5]->makeSound();
	animal[0]->makeSound();

	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		delete animal[i];

	return (0);
}