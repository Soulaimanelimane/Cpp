/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:48:27 by slimane           #+#    #+#             */
/*   Updated: 2025/09/20 15:24:33 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(){
    const std::string &reftype = type;
    return  (reftype);
}

void Weapon::setType(std::string t) {
    type = t;
}

Weapon::Weapon(std::string name)
{
    type = name;
}
Weapon::Weapon()
{
    std::cout << "Constructor called" << std::endl;
}