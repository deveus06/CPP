#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n) {}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}
