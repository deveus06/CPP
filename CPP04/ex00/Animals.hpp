#pragma once
#include <iostream>

class AAnimal{
    protected :
    std::string type;

    public :
    AAnimal();
    virtual ~AAnimal();

    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);

    const std::string &getType() const ;
    void setType(std::string type);

    virtual void makeSound() const;
};

