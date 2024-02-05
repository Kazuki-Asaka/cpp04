#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Cat constructor called" << std::endl;
	this -> type = "Cat";
}

Cat::Cat(const Cat& rhs) {
	if (this != &rhs) {
		std::cout << "Cat Copy constructor called" << std::endl;
		*this = rhs;
	}
}

Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy assignment called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructors called" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Cat : " << std::endl;
}