/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:18:56 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 20:25:53 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);

    Zombie*	zombiehorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombiehorde[i].set_name(name);

    return (zombiehorde);
}
