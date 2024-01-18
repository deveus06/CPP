#pragma once
#include <iostream>


class ClapTrap{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public: 
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();

        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap& other);

        bool isDead;

        void            print_infos();
        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
};
