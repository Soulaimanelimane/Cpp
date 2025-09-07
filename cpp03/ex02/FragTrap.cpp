/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 20:58:30 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 00:17:27 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap (std::string name) : ClapTrap(name){
    std::cout << "Parmitrized Constructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
    std::cout << "Copy Constructure called fro FragTrap" << std::endl;
}


FragTrap & FragTrap::operator =(const FragTrap &obj) {
    ClapTrap::operator=(obj);
    std::cout << "Copy assignment operator called From ScavTrap " << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void){
    std::cout << "ayouz nk agmanoooo 👋🏿​ .." << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "Desctructor called From FragTrap" << std::endl;
}