#pragma once // this means the file will only be included once during compilation, preventing duplicate definitions. We still include the traditional include guards for compatibility.
#ifndef ANIMAL_H // here begins the traditional include guard
# define ANIMAL_H // if ANIMAL_H is not defined, define it and include the contents of this file
# include <iostream>
# include "colors.h"

class	Animal
{

public:

	Animal(void);
	Animal(std::string type);
	Animal(Animal const & input);
	Animal const & operator=(Animal const & input);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string		_type;


private:


};

#endif