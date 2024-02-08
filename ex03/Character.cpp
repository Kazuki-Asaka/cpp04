#include "Character.hpp"

Character::Character() {
	std::cout << "Characteer constructor called" << std::endl;
	this -> name = "No name";
}

Character::Character(std::string name) {
	std::cout << "Characteer name constructor called" << std::endl;
	this -> name = name;
}

Character::Character(const Character& rhs) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = rhs;
	for (int i = 0; i < 4; i++) {
		slot[i] = NULL;
	}
}

Character& Character::operator=(const Character& rhs) {
	std::cout << "Character Copy assignmrnt called" << std::endl;
	this -> name = rhs.name;
	for (int i = 0; i < 4; i++) {
		AMateria *tmp;
		if (slot[i]->getType() == "ice")
			tmp = new Ice();
		else if (slot[i]->getType() == "cure") 
			tmp = new Cure();
		else
			AMateria *tmp = NULL;
		*tmp = *(this->slot[i]);
		delete(this -> slot[i]);
		this -> slot[i] = tmp;
	} 
	return (*this);
}

std::string const & Character::getName() const {
	return (name);
}

void Character::equip(AMateria *m) {
	int i = 0;
	while (slot[i] != NULL)
		i++;
	if (i > 3) {
		std::cout << "slot is full" << std::endl;
	}
	else {
		std::cout << "set " << m->getType() << std::endl;
		slot[i] = m;
	}
}

void Character::unequip(int idx) {
	if (0 <= idx && idx <= 3) {
		std::cout << "unequip " << slot[idx] -> getType() << " " << std::endl;
		slot[idx] = NULL;
	}
	else {
		std::cout << "idx is invalid" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx <= 3) {
		// std::cout << "unequip " << slot[idx] -> getType() << " " << std::endl;
		slot[idx]->use(target);
	}
	else {
		std::cout << "idx is invalid" << std::endl;
	}
}

Character::~Character() {
	std::cout << "Character destrocter called" << std::endl;
	for (int i = 0; i < 4 ; i++) {
		delete (this -> slot[i]);
	}
}