/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:46:11 by slimane           #+#    #+#             */
/*   Updated: 2025/08/03 00:10:01 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    // 1
    Zombie zomb = Zombie(name);
    zomb.annouce();
    // 2
    // Zombie zomb(name);
    // zomb.annouce();

}