#include "Zombie.hpp"

int main() {
    const int hordeSize = 1;
    Zombie* zombieHordePtr = zombieHorde(hordeSize, "Pablo");
    delete[] zombieHordePtr; 

    return 0;
}
