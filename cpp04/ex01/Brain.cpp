/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:36:15 by slimane           #+#    #+#             */
/*   Updated: 2025/09/09 01:44:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = "ayouz";
    }
    
    std::cout << "Constructor called from Brain" << std::endl;
}

Brain::Brain(std::string ideas[100])
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = ideas[i];
        i++;
    }
    std::cout << "Parametrized Constructor Called from Brain" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = obj.ideas[i];
    }
    std::cout << "the Copy Constructor called from Brain";
}

Brain & Brain::operator=(const Brain &obj)
{
    if (this == &obj)
        return *this;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = obj.ideas[i];
        i++;
    }
    std::cout << "Copy assignment operator called from Brain" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called form Brain" << std::endl; 
}
