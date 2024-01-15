#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string n);

    void announce() const;

    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
