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
    virtual std::string const & getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
private:
    AMateria* slot[4];
    std::string name;
};

#endif