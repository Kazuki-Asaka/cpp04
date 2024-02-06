#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this -> type = "Dog";
}

Dog::Dog(const Dog& rhs) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = rhs;
}

Dog::~Dog() {
	std::cout << "Dog destructors called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy assignment called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
	}
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Dog : " << "bowwow " << std::endl;
}