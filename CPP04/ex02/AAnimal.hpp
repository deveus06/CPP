#pragma once
#include <iostream>
#include "Brain.hpp"
class AAnimal{
    protected :
    std::string type;

    public :
    AAnimal();
    virtual ~AAnimal() = 0;

    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);

    const std::string &getType() const ;
    void setType(std::string type);

    virtual void makeSound() const;
};

