#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructors called" << std::endl;
}

Brain::Brain(const Brain& rhs) {
	std::cout << "brain copy constructors called";
	*this = rhs;
}

Brain::~Brain() {
	std::cout << "Brain destructors called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain copy assignment called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < idea_size; i++) {
			this -> idea[i] = rhs.idea[i];
		}
	}
	return (*this);
}
