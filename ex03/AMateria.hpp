#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
public:
	AMateria(std::string const & type);

	std::string const  & getType()const;

	virtual AMateria* clone() const ;
	virtual void use(ICharacter& target);
};

#endif