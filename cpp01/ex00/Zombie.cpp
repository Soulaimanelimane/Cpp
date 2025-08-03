/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:33:52 by slimane           #+#    #+#             */
/*   Updated: 2025/08/03 10:23:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
    name = n;
    std::cout  << "the Constructor create " << name << std::endl;
}

void Zombie::annouce(void)
{
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

