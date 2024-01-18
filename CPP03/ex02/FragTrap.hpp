#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap();
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    ~FragTrap();

    void    attack(const std::string& other);
    void    highFiveGuys();
};
