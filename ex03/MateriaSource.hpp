#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource& rhs);
    MateriaSource& operator=(const MateriaSource& rhs);
    virtual ~MateriaSource();
	virtual void learnIMateria(AMateria*) const;
	virtual AMateria* createMateria(std::string const & type);
private:
    AMateria *slot[4];
};

#endif