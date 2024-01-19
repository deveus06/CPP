#pragma once
#include <iostream>

class WrongAnimal{
    protected :
    std::string type;

    public :
    WrongAnimal();
    virtual ~WrongAnimal();

    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);

    const std::string &getType() const ;
    void setType(std::string type);

    void makeSound() const;
};
