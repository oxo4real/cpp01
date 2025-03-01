#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    int N = 20;
    
    Zombie* zombiehord = zombieHorde(N, "zombieHordMember");
        
    for (int i = N - 1; i >= 0; i--)
        zombiehord[i].announce();
    
    std::cout << std::endl;
    
    delete[] zombiehord;
}
