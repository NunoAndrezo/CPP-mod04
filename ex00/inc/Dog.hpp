#pragma once
#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"

class	Dog : public Animal
{

public:

	Dog(void);
	Dog(Dog const & input);
	Dog const & operator=(Dog const & input);
	~Dog(void);

	virtual void	makeSound(void) const;

protected:


private:


};

#endif