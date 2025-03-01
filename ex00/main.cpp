#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;

    std::cout << std::endl;
    
    randomChump("Zombie2");
}
