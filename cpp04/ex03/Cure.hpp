/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:29:01 by slimane           #+#    #+#             */
/*   Updated: 2025/11/05 23:57:59 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP 
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria 
{

    public:
        Cure();
        Cure(std::string const &type);
        Cure(Cure const &obj);
        Cure & operator=(Cure const &obj);
        ~Cure();

        Cure * clone() const;
        void use(ICharacter &target);
};




#endif