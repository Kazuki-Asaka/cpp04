#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	~Animal();
	Animal(const Animal &rhs);
	Animal& operator=(const Animal& rhs);
	std::string getType();
	void makeSound();

protected:
	std::string type;
};

#endif