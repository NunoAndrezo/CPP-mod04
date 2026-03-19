#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	_myBrain = new Brain();
	std::cout << COLOR_BLUE << "[Dog] default constructor called\n" << COLOR_DEFAULT;
}

Dog::Dog(Dog const &input) : AAnimal(input)
{
	_myBrain = new Brain(*input._myBrain);
	std::cout << COLOR_BLUE << "[Dog] copy constructor called\n";
}

Dog const & Dog::operator=(Dog const &input)
{
	if (this != &input)
	{
		AAnimal::operator=(input);
		delete _myBrain;
		_myBrain = new Brain(*input._myBrain);
	}
	std::cout << COLOR_BLUE << "[Dog] assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

Dog::~Dog(void)
{
	delete _myBrain;
	std::cout << COLOR_BLUE << "[Dog] destructor called\n" << COLOR_DEFAULT;
}

void	Dog::makeSound(void) const
{
	std::cout << COLOR_BLUE << "[Dog] Woof! Woof!\n" << COLOR_DEFAULT;
}

void	Dog::setIdea(unsigned int index, std::string idea) const
{
	this->_myBrain->setIdea(index, idea);
}

std::string	Dog::getIdea(unsigned int index) const
{
	return (this->_myBrain->getIdea(index));
}
