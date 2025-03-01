/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:18:49 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 20:18:51 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
