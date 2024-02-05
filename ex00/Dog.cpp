#include "Dog.hpp"

Dog::Dog() : Animal() {
	this -> type = "Dog";
}

Dog::Dog(const Dog& rhs) {
	if (this != &rhs) {
		std::cout << "Dog Copy constructor called" << std::endl;
		*this = rhs;
	}
}

Dog::~Dog() {
	std::cout << "Cat destructors called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Cat copy assignment called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

void Dog::makeSound() {
	std::cout << "Dog : " << "bowwow " << std::endl;
}