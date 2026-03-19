#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal* animal = new Animal(); // does this make a shallow or deep copy? It makes a deep copy because Animal has no dynamic memory allocation.
	std::cout << "Hi, I am a " << animal->getType() << " " << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;


	const Animal* dog = new Dog();
	std::cout << "Hi, I am a " << dog->getType() << " " << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;


	const Animal* cat = new Cat();
	std::cout << "Hi, I am a " << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;


	const WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << "Hi, I am a " << wrong_animal->getType() << " " << std::endl;
	wrong_animal->makeSound();
	delete wrong_animal;
	std::cout << std::endl;


	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "Hi, I am a " << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	delete wrong_cat;
	std::cout << std::endl;

	return (0);
}
