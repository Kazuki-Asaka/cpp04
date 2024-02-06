#include "Cat.hpp"

Cat::Cat() : AAnimal(){
	std::cout << "Cat constructor called" << std::endl;
	this -> type = "Cat";
	this -> cat_brain = new Brain();
}

Cat::Cat(const Cat& rhs) {
	this -> cat_brain = NULL;
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &rhs) {
		AAnimal::operator=(rhs);

		Brain *tmp_brain = new Brain();
		*tmp_brain = *(rhs.cat_brain);
		delete(this -> cat_brain);
		cat_brain = tmp_brain;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructors called" << std::endl;
	delete cat_brain;
}

void Cat::makeSound() const{
	std::cout << "Cat : " << "meow meow"<<std::endl;
}