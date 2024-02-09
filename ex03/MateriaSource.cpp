#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    std::cout << "MateriaSource copy assignment called" << std::endl;
	for (int i = 0; i < 4; i++) {
		AMateria *tmp;
		if (rhs.slot[i] == NULL)
			tmp = NULL;
		else if (rhs.slot[i]->getType() == "ice")
			tmp = new Ice();
		else if (rhs.slot[i]->getType() == "cure") 
			tmp = new Cure();
		else
			tmp = NULL;
		*tmp = *(rhs.slot[i]);
		// delete(this -> slot[i]);
		this -> slot[i] = tmp;
	} 
		return (*this);
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++) {
		if (slot[i] == NULL) {
			this -> slot[i] = m;
			std::cout << i << ";" << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "learn slot is full" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (i < 4) {
		if (slot[i] == NULL)
			i++;
		else if (slot[i] -> getType() == type)
			return (slot[i] -> clone());
		else
			i++;
	}
	std::cout << "not learn Materia" << std::endl;
	return (NULL);
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete (this -> slot[i]);
	}
}