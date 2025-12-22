/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:38:59 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 00:02:38 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "the Default Constructer have been called from AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type){
    this->type = type;
    std::cout << "the Parametrize Constructer have been called from AMateria" << std::endl;
}

AMateria::AMateria(AMateria const & obj) 
{
    std::cout << "the Copy Constructer have been called from AMateria" << std::endl;
    this->type = obj.type;
}


AMateria & AMateria::operator=(AMateria const &obj) {
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

std::string const & AMateria::getType(void) const
{
    return (type);
}

AMateria::~AMateria()
{
    std::cout << "Destructor called from AMateria" <<std::endl;
}