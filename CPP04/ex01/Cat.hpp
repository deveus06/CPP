#pragma once
#include "Brain.hpp"

class Cat : public Animals{
    private:
    Brain* brain;

    public:
    Cat();

    Cat(const Cat &other);
    ~Cat();

    void makeSound() const;

};


