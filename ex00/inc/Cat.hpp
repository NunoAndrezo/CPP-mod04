#pragma once
#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"

class	Cat : public Animal
{

public:

	Cat(void);
	Cat(Cat const & input);
	Cat const & operator=(Cat const & input);
	~Cat(void);

	virtual void	makeSound(void) const;

protected:


private:


};

#endif