#pragma once
#ifndef AAnimal_H
# define AAnimal_H
# include <iostream>
# include "../inc/colors.h"

class	AAnimal
{

public:

	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const & input);
	AAnimal const & operator=(AAnimal const & input);
	virtual ~AAnimal(void);

	virtual void	makeSound(void) const = 0; // = 0 significa que a função não tem implementação nesta classe. ISTO TORNA A CLASSE ABSTRATA
	std::string		getType(void) const;

protected:

	std::string		_type;


private:


};

#endif

/*Uma classe abstrata é uma classe que não podes criar objetos diretamente.
Para fazer uma classe abstrata, basta ter pelo menos um método virtual puro:
virtual void makeSound() const = 0;*/