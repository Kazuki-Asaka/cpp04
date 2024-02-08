#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter {
public:
    Character();
    Character(std::string name);
    ~Character();
    Character(const Character& rhs);
    Character& operator=(const Character& rhs);
    virtual std::string const & getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private:
    AMateria* slot[4];
    std::string name;
};

#endif