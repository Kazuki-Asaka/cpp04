#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
//#include "ICharacter.hpp"

class ICharacter;

class AMateria {
public:
	AMateria(std::string const & type);
	AMateria();
	AMateria(const AMateria& rhs);
	~AMateria();
	AMateria& operator=(const AMateria& rhs);
	std::string const  & getType()const;

	virtual AMateria* clone() const ;
	virtual void use(ICharacter& target);
protected:
	std::string type;
};

#endif