#pragma once
#include <iostream>

class Animal{
    protected :
    std::string type;

    public :
    Animal();
    virtual ~Animal();

    Animal(const Animal &other);
    Animal &operator=(const Animal &other);

    const std::string &getType() const ;
    void setType(std::string type);

    virtual void makeSound() const;
};

