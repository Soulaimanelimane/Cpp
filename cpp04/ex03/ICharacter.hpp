/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:10:41 by slimane           #+#    #+#             */
/*   Updated: 2025/11/11 16:00:59 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  ICHARACTER_HPP
#define  ICHARACTER_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"


class ICharacter
{
    public:
        ICharacter();
        ICharacter(const std::string & name);
        ICharacter(ICharacter const &obj);
        ICharacter &operator=(ICharacter const &obj);
        virtual ~ICharacter();
        
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


#endif 