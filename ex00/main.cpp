/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:18:25 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 20:26:27 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie*	zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;

    std::cout << std::endl;
    
    randomChump("Zombie2");
}
