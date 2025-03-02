#include "Harl.hpp"
#include <iostream>

int main (int ac, char **av)
{
    Harl        harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    if (ac != 2)
    {
        std::cout << "Invalid number of arguments"
                  << std::endl;
        return (1);
    }
    while (i < 4)
    {
        if (av[1] == levels[i])
            break ;
        i++;
    }
    switch (i) {
        case 0:
            std::cout << "[DEBUG]" << std::endl;
            harl.complain("DEBUG");
            std::cout << std::endl;
            // fallthrough
        case 1:
            std::cout << "[INFO]" << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;
            // fallthrough
        case 2:
            std::cout << "[WARNING]" << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
            // fallthrough
        case 3:
            std::cout << "[ERROR]" << std::endl;
            harl.complain("ERROR");
            std::cout << std::endl;
            return (0);
        default:
            std::cout << "[ Probably complaining about "
                      << "insignificant problems ]"
                      << std::endl;
            return (0);
    }
}
