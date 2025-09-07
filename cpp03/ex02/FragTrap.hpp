/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 20:27:15 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 00:21:00 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap & operator =(const FragTrap &obj);

        void highFivesGuys(void);
        
        ~FragTrap ();
};
#endif 

