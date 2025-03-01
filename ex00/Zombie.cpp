#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce(void)
{
    std::cout << this->name
              << ": BraiiiiiiinnnzzzZ..."
              << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name
              << " was destroyed"
              << std::endl;
}
