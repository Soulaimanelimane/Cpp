/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:38:02 by slimane           #+#    #+#             */
/*   Updated: 2025/09/07 20:30:48 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor called From ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "the parametrized constuctor called from Scavtrap" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "Copy constructor called From ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    std::cout << "Copy assignment operator called From ScavTrap " << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap ()
{
    std::cout << "the ScavTrap called the destructor " << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}