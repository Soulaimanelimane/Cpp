/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:53:02 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 16:53:22 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :AMateria()
{
    type = "cure";
    std::cout <<  "the default Constructor of Cure called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
    std::cout <<  "the Parametrize Constructor of Cure called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria(obj)
{
    std::cout <<  "the Copy Constructor of Cure called" << std::endl;
}

Cure & Cure::operator=(Cure const &obj) 
{
    (AMateria::operator=(obj));
    std::cout << "Copy assignment operator called" << std::endl;
}

Cure * Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *";
}

Cure::~Cure()
{
    std::cout << "the Destructor called From Cure" << std::endl;
}
