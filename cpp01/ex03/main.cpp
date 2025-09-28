/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:46:10 by slimane           #+#    #+#             */
/*   Updated: 2025/09/20 15:30:27 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{

    Weapon club = Weapon("aka dragon");
   
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("shot gun");
    bob.attack();
}
{
    Weapon club = Weapon("M 14");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("SKS");
    jim.attack();
}
return 0;
}