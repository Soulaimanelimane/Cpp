/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:48:10 by slimane           #+#    #+#             */
/*   Updated: 2025/09/20 15:22:41 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>

class HumanA{
    private:
        std::string name;
        Weapon& weaponA ;
    public:
        HumanA(std::string n, Weapon &W);
        void attack();

};
#endif