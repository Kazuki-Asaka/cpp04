#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	static const int idea_size = 100;
public:
	Brain();
	Brain(const Brain& rhs);
	~Brain();
	Brain& operator=(const Brain& rhs);
	std::string idea[idea_size];
};

#endif