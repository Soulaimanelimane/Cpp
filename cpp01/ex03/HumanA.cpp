/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:48:04 by slimane           #+#    #+#             */
/*   Updated: 2025/08/04 15:15:35 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

void HumanA::attack()
{
    if (weaponA)
        std::cout << name <<  " attacks with their " << weaponA->getType()  << std::endl;
}

HumanA::HumanA(std::string n, Weapon &W)  {
    name = n;
    weaponA = &W;
}