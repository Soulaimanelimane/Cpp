/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:59:20 by slimane           #+#    #+#             */
/*   Updated: 2025/09/09 01:48:00 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    br = new Brain();
    std::cout << "Constructor called from Cat" << std::endl;
}

Cat::Cat(std::string type) :Animal(type)
{
    std::cout << "Paramitrized Constructor called from Cat" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    
    br = new Brain(*obj.br);
    std::cout << "Copy Constructor called from Cat" << std::endl; 
}

Cat & Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    this->br = new Brain(*obj.br);
    std::cout << "Assignment Operator called from Cat" << std::endl;
    return (*this);
}

Cat::~Cat(){
    delete br;
    std::cout << "destructor called from Cat" << std::endl; 
}

void Cat::makeSound() const 
{
    std::cout << "meaw meaw meaw" << std::endl;
}