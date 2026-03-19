#pragma once
#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{

public:

	Cat(void);
	Cat(Cat const & input);
	Cat const & operator=(Cat const & input);
	virtual	~Cat(void);

	virtual void	makeSound(void) const;
	void			setIdea(unsigned int index, std::string idea) const;
	std::string		getIdea(unsigned int index) const;

protected:


private:

	Brain * _myBrain;

};

#endif