#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
	this -> type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {
	if (this != &rhs) {
		std::cout << "WrongAnimal Copy constructor called" << std::endl;
		*this = rhs;
	}
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	std::cout << "WrongAnimal Copy assignment called" << std::endl;
	this -> type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructors called" << std::endl;
}

void WrongAnimal::makeSound() {
	std::cout << "I am WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() {
	return (this -> type);
}