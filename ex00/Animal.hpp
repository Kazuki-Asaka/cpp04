#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    Animal();
    ~Animal();
    Animal(const Animal &rhs);
    Animal& operator=(const Animal& rhs);
    std::string Animal::getType();
protected:
    std::string type;
};

#endif