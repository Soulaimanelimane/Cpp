/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 01:08:24 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 21:46:12 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    std::cout << "Constructor called from Dog" << std::endl;
}

Dog::Dog(std::string type) :Animal(type)
{
    std::cout << "Paramitrized Constructor called from Dog" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Copy Constructor called from Dog" << std::endl; 
}

Dog & Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    std::cout << "Assignment Operator called from Dog" << std::endl;
    return (*this);
}

Dog::~Dog(){
    std::cout << "destructor called from Dog" << std::endl; 
}

void Dog::makeSound() const 
{
    std::cout << "haw haw haw " << std::endl;
}