/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:29:30 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 17:13:06 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP 
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        Ice(std::string const &type);
        Ice(Ice const &obj);
        Ice & operator=(Ice const &obj);
        ~Ice();

        Ice* clone() const;
        void use(ICharacter& target);
};

#endif