#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal constructor called" << std::endl;
	this -> type = "Animal";
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructors called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	std::cout << "Animal copy assignment called" << std::endl;
	if (this != &rhs) {
		this -> type = rhs.type;
	}
	return (*this);
}

std::string AAnimal::getType() const{
	return (this -> type);
}

// void AAnimal::makeSound() const{
// 	std::cout << "I am AAnimal" << std::endl;
// }