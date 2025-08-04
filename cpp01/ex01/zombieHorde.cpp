/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:32:52 by slimane           #+#    #+#             */
/*   Updated: 2025/08/04 10:45:26 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *p = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        p[i] = Zombie(name);
        p[i].annouce();  
        i++;
    }
    return (p);
}