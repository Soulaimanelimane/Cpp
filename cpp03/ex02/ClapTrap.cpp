/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 17:38:36 by slimane           #+#    #+#             */
/*   Updated: 2025/09/07 20:53:58 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    Hit_point = 100;
    Energy_point = 100;
    Attack_dmg = 30;
    this->name = name;
    std::cout << "Parameterized Constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    name = obj.name;
    Hit_point = obj.Hit_point;
    Energy_point = obj.Energy_point;
    Attack_dmg = obj.Attack_dmg;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    name = obj.name;
    Hit_point = obj.Hit_point;
    Energy_point = obj.Energy_point;
    Attack_dmg = obj.Attack_dmg;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string &target){
    if (Hit_point > 0 && Energy_point > 0)
    {
        std::cout << "ClapTrap "<< name << " attacks " << target << ", causing " << Attack_dmg << "points of damage!" << std::endl;
        Energy_point--;
    }
    if (Hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << " is already gone" << std::endl;
        return ;
    }
    else if (Energy_point <= 0)
    {
        std::cout << "ClapTrap " << name << " don't have energy to attack" << std::endl;
        return ;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_point - amount <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead :( after taking the amout " << amount << std::endl;
        return ;  
    }
    Hit_point -= amount ;
    std::cout << "ClapTrap " << name << " take damage of " << amount << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    if (Hit_point > 0 && Energy_point > 0)
    {
        std::cout << "ClapTrap " << name  << " be repaird by " << amount << std::endl;
        Hit_point += amount;
        Energy_point--;
    }
    if (Hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << "can't be repaird is gone :( " << std::endl;
        return ;
    }
    if (Energy_point <= 0)
    {
        std::cout << "ClapTrap " << name << " don't have enough energy to be repaird " << std::endl;
        return ;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}