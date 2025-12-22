/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:57:21 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 17:16:22 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    type = "";
    std::cout << "the Default Constructure Called from Ice" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
    std::cout << "Paramerize Constructor  From Ice Called" << std::endl;
}

Ice::Ice(Ice const &obj) : AMateria(obj) 
{
    std::cout << "The Copy Constructor Called From Ice" << std::endl;
}

Ice & Ice::operator=(Ice const &obj)
{
    (AMateria::operator=(obj));
    std::cout << "the Copy assingment Called From Ice" << std::endl;
}

Ice* Ice::clone() const 
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}


Ice::~Ice()
{
    std::cout << "the Destructor From Ice called" << std::endl;
}