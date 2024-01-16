#include "ClapTrap.hpp"


int main()
{
    ClapTrap player1("jett");
    ClapTrap player2("omen");

    for(int i = 0;i < 10;i++)
    {
        if(player1.isDead == 1 || player2.isDead == 1)
            return(0);
        player2.attack("jett");
        player1.takeDamage(0);
        if(player1.isDead == 1 || player2.isDead == 1)
            return(0);
        player1.attack("omen");
        player2.takeDamage(0);
        player2.beRepaired(0);
    }
    
    return 0;
}
