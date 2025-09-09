/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:59:20 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 21:46:03 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Constructor called from Cat" << std::endl;
}

Cat::Cat(std::string type) :Animal(type)
{
    std::cout << "Paramitrized Constructor called from Cat" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Copy Constructor called from Cat" << std::endl; 
}

Cat & Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    std::cout << "Assignment Operator called from Cat" << std::endl;
    return (*this);
}

Cat::~Cat(){
    std::cout << "destructor called from Cat" << std::endl; 
}

void Cat::makeSound() const 
{
    std::cout << "meaw meaw meaw" << std::endl;
}