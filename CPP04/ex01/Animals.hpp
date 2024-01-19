#pragma once
#include <iostream>

class Animals{
    protected :
    std::string type;

    public :
    Animals();
    virtual ~Animals();

    Animals(const Animals &other);
    Animals &operator=(const Animals &other);

    const std::string &getType() const ;
    void setType(std::string type);

    virtual void makeSound() const;
};

