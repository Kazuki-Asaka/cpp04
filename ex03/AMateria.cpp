#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    this -> type = type;
}

AMateria::AMateria() {
    this -> type = "No type";
}

AMateria::AMateria(const AMateria& rhs) {
    *this = rhs;
}

AMateria::~AMateria() {
    std::cout << "AMmateria destructor called " << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    this -> type = rhs.type;
}

std::string const & AMateria::getType() const {
    return (this -> type);
}

