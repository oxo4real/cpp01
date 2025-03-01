/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:18:44 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 20:26:11 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
    int N = 20;
    
    Zombie* zombiehord = zombieHorde(N, "zombieHordMember");
        
    for (int i = N - 1; i >= 0; i--)
        zombiehord[i].announce();
    
    std::cout << std::endl;
    
    delete[] zombiehord;
}
