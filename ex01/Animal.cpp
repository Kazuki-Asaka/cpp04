#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this -> type = "Animal";
}

Animal::~Animal() {
	std::cout << "Animal destructors called" << std::endl;
}

Animal::Animal(const Animal& rhs) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs) {
	std::cout << "Animal copy assignment called" << std::endl;
	if (this != &rhs) {
		this -> type = rhs.type;
	}
	return (*this);
}

std::string Animal::getType() const{
	return (this -> type);
}

void Animal::makeSound() const{
	std::cout << "I am Animal" << std::endl;
}