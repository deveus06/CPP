#include "Zombie.hpp"

int main() {
    Zombie* zombieHeap = newZombie("HeapZombie");
    zombieHeap->announce();
    delete zombieHeap;

    randomChump("StackZombie");

    return 0;
}
