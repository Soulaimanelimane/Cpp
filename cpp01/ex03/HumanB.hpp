/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:48:00 by slimane           #+#    #+#             */
/*   Updated: 2025/08/04 14:44:09 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.h"
#include <string>

class HumanB{
    private:
        std::string name;
        Weapon *weaponB;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &W);
        void attack();

};
#endif