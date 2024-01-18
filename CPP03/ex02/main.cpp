#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    ClapTrap claptrap("Mr. Claptrap");
    ScavTrap scavtrap("Mr. ScavTrap");
    ClapTrap *claptrap2 = new ScavTrap("Square is a rectangle but rectangle is not square");
    FragTrap fragtrap("Mr. FragTrap");

    claptrap.print_infos();
    scavtrap.print_infos();
    claptrap2->print_infos();
    fragtrap.print_infos();
    
    claptrap.attack("Enemies");
    scavtrap.attack("Enemies");
    claptrap2->attack("Enemies");
    fragtrap.attack("Bad Guys");
    scavtrap.guardGate();
    fragtrap.highFiveGuys();

    delete claptrap2;

    return 0;
}
