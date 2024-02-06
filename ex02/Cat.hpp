#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
public:
	Cat();
	Cat(const Cat& rhs);
	Cat& operator=(const Cat& rhs);
	~Cat();
	void makeSound() const;
private:
	Brain* cat_brain;
};

#endif