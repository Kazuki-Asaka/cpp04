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

void MateriaSource::learnIMateria(AMateria*) const{
    
}