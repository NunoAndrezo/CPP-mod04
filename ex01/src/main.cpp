#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ARRAY OF ANIMALS TEST ===\n";
	Animal* animals[6];

	for (int i = 0; i < 3; i++)
	{
		animals[i] = new Dog();
		animals[i + 3] = new Cat();
	}
	std::cout << "\n=== MAKE SOUND TEST ===\n";
	for (int i = 0; i < 6; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << "\n=== DEEP COPY TEST (COPY CONSTRUCTOR) ===\n";
	Dog dog1;
	dog1.setIdea(0, "Food");

	Dog dog2(dog1); // copy constructor
	dog2.setIdea(1, "Hunt");

	std::cout << "dog1 idea 0: " << dog1.getIdea(0) << std::endl;
	std::cout << "dog1 idea 1: " << dog1.getIdea(1) << std::endl;
	std::cout << "dog2 idea 0: " << dog2.getIdea(0) << std::endl;
	std::cout << "dog2 idea 1: " << dog2.getIdea(1) << std::endl;

	std::cout << "\n=== DEEP COPY TEST (ASSIGNMENT OPERATOR) ===\n";
	Cat cat1;
	cat1.setIdea(0, "Sleep");

	Cat cat2;
	cat2 = cat1; // operator=

	cat2.setIdea(1, "Eat");

	std::cout << "cat1 idea 0: " << cat1.getIdea(0) << std::endl;
	std::cout << "cat1 idea 1: " << cat1.getIdea(1) << std::endl;
	std::cout << "cat2 idea 0: " << cat2.getIdea(0) << std::endl;
	std::cout << "cat2 idea 1: " << cat2.getIdea(1) << std::endl;

	std::cout << "\n=== CLEAN UP ===\n";
	for (int i = 0; i < 6; i++)
		delete animals[i];

	//std::cout << "\n=== BASE CLASS POINTER TEST ===\n";
	//Animal *ani = new Dog();
	//ani->makeSound();

	//// Dynamic cast para acessar Dog-specific methods
	//Dog* dog_ptr = dynamic_cast<Dog*>(ani);
	//if (dog_ptr)
	//{
	//	dog_ptr->setIdea(0, "Chasing a cat");
	//	std::cout << "Dog's idea via pointer: " << dog_ptr->getIdea(0) << std::endl;
	//}
	//delete ani;
	return 0;
}
