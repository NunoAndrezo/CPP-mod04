#pragma once
#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "../inc/WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat(WrongCat const & input);
	WrongCat const & operator=(WrongCat const & input);
	~WrongCat(void);

	virtual void	makeSound(void) const;

protected:


private:


};

#endif