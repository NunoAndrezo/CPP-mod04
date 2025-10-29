#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"


/*
- Animal class should not be instantiable (too genericc)
- Use a pure virtual function in my case:(makeSound) and destrucotr, to make Animal abstract
- Derived classes (Dog, Cat) now implement makeSound
- Use pointers (Animal*) to enable polymorphism
- Use static_cast<Dog*>(a1) only when you need Dog-specific access
- Brain composition and deep copy must still work as before
*/

int main(void)
{
	// --- 1. Polymorphism test ---
	Animal* a1 = new Dog();
	Animal* a2 = new Cat();

	std::cout << "--- Making sounds ---\n";
	a1->makeSound();
	a2->makeSound();

	// --- 2. Brain idea test ---
	a1->setIdea("Chase the mailman");
	a1->setIdea("Dig a hole");
	a2->setIdea("Nap in the sun");

	std::cout << "\nDog's ideas:\n";
	a1->printIdeas();

	std::cout << "\nCat's ideas:\n";
	a2->printIdeas();

	// --- 3. Deep copy test (copy constructor) ---
	Dog* originalDog = static_cast<Dog*>(a1);
	Dog* copyDog = new Dog(*originalDog);

	std::cout << "\nCopied Dog's ideas (should match original):\n";
	copyDog->printIdeas();

	// Modify original to verify deep copy
	originalDog->setIdea("Bark at nothing");
	std::cout << "\nOriginal Dog's ideas (after modification):\n";
	originalDog->printIdeas();

	std::cout << "\nCopied Dog's ideas (should remain unchanged):\n";
	copyDog->printIdeas();

	// --- 4. Clean up ---
	delete a1;
	delete a2;
	delete copyDog;

	return 0;
}
