#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ClapTrap claptrap("Mr. Claptrap");
    ScavTrap scavtrap("Mr. ScavTrap");
    ClapTrap *claptrap2 = new ScavTrap("Square is a rectangle but rectangle is not square");

    claptrap.print_infos();
    scavtrap.print_infos();
    claptrap2->print_infos();
    
    claptrap.attack("Enemies");
    scavtrap.attack("Enemies");
    claptrap2->attack("Enemies");
    scavtrap.guardGate();

    delete claptrap2;

    return 0;
}
