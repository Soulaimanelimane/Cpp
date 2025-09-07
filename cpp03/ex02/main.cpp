/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:49:41 by slimane           #+#    #+#             */
/*   Updated: 2025/09/06 23:39:41 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj("Soul");

    obj.attack("training dummy");
    obj.takeDamage(5);
    obj.beRepaired(3);
    obj.takeDamage(20);
    obj.attack("target");
}