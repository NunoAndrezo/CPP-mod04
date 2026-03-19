#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "../inc/colors.h"

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