/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:28:01 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 19:35:50 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
   name = ""; 
   std::cout << "the Default Constructor called from Icharacter" << std::endl;
}

ICharacter::ICharacter(std::string const  & name)
{
    this->name = name; 
    std::cout << "the Parametrize Constructor Called from Icharater" << std::endl;
}

ICharacter::ICharacter(ICharacter const &obj)
{
    name = obj.name;
    std::cout << "the Copy Constructor Called From ICharacter" << std::endl;
}


ICharacter & ICharacter::operator=(ICharacter const &obj)
{
    if (this == &obj)
        return *this;
    name = obj.name;
    std::cout << "the Copy assingment Called From ICharacter" << std::endl;
}

ICharacter::~ICharacter()
{
    std::cout << "the Destructor called from ICharacter" << std::endl;
}

