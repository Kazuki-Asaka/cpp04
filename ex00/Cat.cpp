#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Cat constructor called" << std::endl;
	this -> type = "Cat";
}

Cat::Cat(const Cat& rhs) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructors called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat : " << "meow meow"<<std::endl;
}