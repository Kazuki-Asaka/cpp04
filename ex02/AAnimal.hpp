#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal &rhs);
	AAnimal& operator=(const AAnimal& rhs);
	std::string getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string type;
};

#endif