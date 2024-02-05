#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this -> type = "Dog";
	this -> dog_brain = new Brain();
}

Dog::Dog(const Dog& rhs) {
	if (this != &rhs) {
		std::cout << "Dog Copy constructor called" << std::endl;
		*this = rhs;
	}
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy assignment called" << std::endl;
	Animal::operator=(rhs);

	Brain *tmp_brain = new Brain();
	*tmp_brain = *(rhs.dog_brain);
	delete (this -> dog_brain);
	dog_brain = tmp_brain;

	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructors called" << std::endl;
	delete dog_brain;
}

void Dog::makeSound() const{
	std::cout << "Dog : " << "bowwow " << std::endl;
}