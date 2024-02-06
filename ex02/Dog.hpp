#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(const Dog& rhs);
	~Dog();
	Dog& operator=(const Dog& rhs);
	void makeSound() const;
private:
	Brain* dog_brain;
};

#endif