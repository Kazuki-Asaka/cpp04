#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = rhs;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    std::cout << "MateriaSource copy assignment called" << std::endl;
}

void MateriaSource::learnIMateria(AMateria* m) const{
	for (int i = 0; i < 4; i++) {
		if (slot[i] == NULL) {
			this -> slot[i] = m;
			break ;
		}
	}
	std::cout << "learn slot is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (i < 4) {
		if (slot[i] -> getType() == type) {
			return (slot[i] -> clone());
		}
		else
			i++;
	}
	std::cout << "not learn Materia" << std::endl;
	return (NULL);
}