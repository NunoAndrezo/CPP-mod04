#pragma once
#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "../inc/Animal.hpp"
# include "../inc/Brain.hpp"

class	Dog : public Animal
{

public:

	Dog(void);
	Dog(Dog const & input);
	Dog const & operator=(Dog const & input);
	virtual	~Dog(void);

	virtual void	makeSound(void) const;
	void			setIdea(unsigned int index, std::string idea) const;
	std::string		getIdea(unsigned int index) const;

protected:


private:

	Brain *_myBrain;

};

#endif