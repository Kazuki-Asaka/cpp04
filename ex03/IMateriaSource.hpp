#ifndef IMATERIASOURCE
#define IMATERIASOURCE

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnIMateria(AMateria*) const = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif;