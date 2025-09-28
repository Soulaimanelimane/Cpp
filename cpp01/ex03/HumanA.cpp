/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:48:04 by slimane           #+#    #+#             */
/*   Updated: 2025/09/20 15:23:38 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
        std::cout << name <<  " attacks with their " << weaponA.getType()  << std::endl;
}

HumanA::HumanA(std::string n, Weapon &W) : weaponA(W)
{
    name = n;
}