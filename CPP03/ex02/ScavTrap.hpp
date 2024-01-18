#pragma once
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:
    ScavTrap();
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    void    attack(const std::string& other);
    void    guardGate();
};
