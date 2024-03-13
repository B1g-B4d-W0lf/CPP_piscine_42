#include "Includes/Animal.hpp"
#include "Includes/Dog.hpp"
#include "Includes/Cat.hpp"
#include "Includes/WrongAnimal.hpp"
#include "Includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* metabis = new WrongAnimal();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " \n" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	metabis->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;
	delete k;
	delete metabis;

	return (0);
}
