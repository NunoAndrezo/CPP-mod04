#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	std::cout << "=== POLYMORPHISM WITH ABSTRACT CLASS ===\n";
	// porque nao faz sentido criares um animal de raca animal!! por isso tornamos a classe abstrata

	//Não compila:
	//AAnimal a;
	//AAnimal* pa = new AAnimal();

	// Criar ponteiros para a classe abstrata
	AAnimal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	std::cout << "\n=== MAKE SOUND VIA AAnimal* ===\n";
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound(); // Polymorphism: chama Dog ou Cat correto

	std::cout << "\n=== DESTRUCTORS TEST ===\n";
	for (int i = 0; i < 4; i++)
		delete animals[i]; // Deleta como AAnimal*, destructores virtuais são chamados

	std::cout << "\nAll abstract class tests completed.\n";
	return 0;
}
