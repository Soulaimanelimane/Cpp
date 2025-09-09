/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:42:29 by slimane           #+#    #+#             */
/*   Updated: 2025/09/09 02:44:15 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor called from Animal" << std::endl; 
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << "Paramitrized Constructor called from Animal" << std::endl; 
}

Animal::Animal(const Animal &obj)
{
    type = obj.type;
    std::cout << "Copy Constructor called from Animal" << std::endl; 
}

Animal &Animal::operator = (const Animal &obj){
    this->type = obj.type;
    std::cout << "Assignment Operator called from Animal" << std::endl; 
    return (*this);
}

Animal::~Animal(){
    std::cout << "destructor called from Animal" << std::endl; 
}

void Animal::makeSound() const { 
    std::cout  << "HHHHHHHHHHHHH" << std::endl;
}

std::string  Animal::getType() const {
    return type ;
}
