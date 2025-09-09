/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 01:08:24 by slimane           #+#    #+#             */
/*   Updated: 2025/09/09 01:45:38 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    br= new Brain();
    std::cout << "Constructor called from Dog" << std::endl;
}

Dog::Dog(std::string type) :Animal(type)
{
    std::cout << "Paramitrized Constructor called from Dog" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    br = new Brain(*obj.br);
    std::cout << "Copy Constructor called from Dog" << std::endl; 
}

Dog & Dog::operator=(const Dog &obj)
{
    if (this != &obj) {  // protect against self-assignment
        Animal::operator=(obj);
        delete br;  // free old brain
        br = new Brain(*obj.br); // deep copy
    }
    std::cout << "Assignment Operator called from Dog" << std::endl;
    return (*this);
}

Dog::~Dog(){
    delete br;
    std::cout << "destructor called from Dog" << std::endl; 
}

void Dog::makeSound() const 
{
    std::cout << "haw haw haw " << std::endl;
}