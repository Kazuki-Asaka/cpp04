#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& rhs);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& rhs);
	void makeSound();
	std::string getType();
protected:
	std::string type;
};
#endif