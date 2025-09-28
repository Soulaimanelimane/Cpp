/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:47:56 by slimane           #+#    #+#             */
/*   Updated: 2025/09/20 15:27:01 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (weaponB)
        std::cout << name <<  " attacks with their " << weaponB->getType()  << std::endl;
    else
        std::cout << name << " don't have a weapon" << std::endl; 
}

HumanB::HumanB(std::string n)
{
    weaponB = NULL;
    name = n;
}

void HumanB::setWeapon(Weapon &W)
{
    weaponB = &W;
}