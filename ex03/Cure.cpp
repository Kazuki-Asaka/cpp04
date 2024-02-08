#include "Cure.hpp"

Cure::Cure() : AMateria(){
    std::cout << "Cure constructors called " << std::endl;
    this -> type = "ice";
}

Cure::Cure(const Cure& rhs) {
    std::cout << "Cure copy constructors called" << std::endl;
    *this = rhs;
}

Cure::~Cure() {
    std::cout << "Cure destructors called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs) {
    std::cout << "Cure copy assignment called" << std::endl;
    AMateria::operator=(rhs);
    return (*this);
}

AMateria* Cure::clone() const {
    std::cout << "Cure clone called" << std::endl;
    AMateria *new_cure = new Cure();
    return (new_cure);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals "<< target.getName() <<"'s wounds *";

}