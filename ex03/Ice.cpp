#include "Ice.hpp"

Ice::Ice() : AMateria(){
    std::cout << "Ice constructors called " << std::endl;
    this -> type = "ice";
}

Ice::Ice(const Ice& rhs) {
    std::cout << "Ice copy constructors called" << std::endl;
    *this = rhs;
}

Ice::~Ice() {
    std::cout << "Ice destructors called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs) {
    std::cout << "Ice copy assignment called" << std::endl;
    AMateria::operator=(rhs);
    return (*this);
}

AMateria* Ice::clone() const {
    std::cout << "Ice clone called" << std::endl;
    AMateria *new_Ice = new Ice();
    return (new_Ice);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *"<< std::endl;

}