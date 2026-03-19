#include "../inc/Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << COLOR_GREEN << "Animal -> default constructor called\n" << COLOR_DEFAULT;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << COLOR_GREEN << "Animal -> \"std::string type\" constructor called type = " << type << std::endl << COLOR_DEFAULT;
}

Animal::Animal(Animal const & input)
{
	*this = input;
	// In this case, it makes a shallow copy because _type is a std::string which manages its own memory.
	std::cout << COLOR_GREEN << "Animal -> copy constructor called\n";
}

Animal const & Animal::operator=(Animal const & input)
{
	this->_type = input._type;
	// in this case, it makes a shallow copy because _type is a std::string which manages its own memory.
	// But I heard I should never make a shallow copy...? Hmm...
	std::cout << COLOR_GREEN << "Animal -> assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << COLOR_GREEN << "Animal -> destructor called\n" << COLOR_DEFAULT;
}

void	Animal::makeSound(void) const
{
	std::cout << COLOR_GREEN << "Animal -> I don't make sounds\n" << COLOR_DEFAULT;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
