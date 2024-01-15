#include "Zombie.hpp"

Zombie::Zombie() : name("Pedro") {}

Zombie::Zombie(std::string n) : name(n) {}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
}
