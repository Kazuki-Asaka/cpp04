#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	Cat();
	Cat(const Cat& rhs);
	Cat& operator=(const Cat& rhs);
	~Cat();
	
};

#endif