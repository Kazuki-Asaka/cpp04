#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	this -> type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	std::cout << "WrongCat Copy assignment called" << std::endl;
	WrongAnimal::operator=(rhs);
	this -> type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructors called" << std::endl;
}

void WrongCat::makeSound() {
	std::cout << "WrongCat : " << "Mew Mew" << std::endl;
}