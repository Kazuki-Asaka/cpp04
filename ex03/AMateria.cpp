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
    return (*this);
}

std::string const & AMateria::getType() const {
    return (this -> type);
}

void AMateria::use(ICharacter& target) {
    // std::cout << target.getName() << std::endl;
    static_cast<void>(target);
}