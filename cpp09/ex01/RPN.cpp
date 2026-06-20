/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:45:31 by slimane           #+#    #+#             */
/*   Updated: 2026/06/14 19:15:13 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    std::cout << "Default Constructer Called" << std::endl;
}

RPN::RPN(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
            numbers.push(str[i] - '0');
        
    }

    
    
}
RPN::RPN(const RPN &obj)
{
    *this = obj;
    std::cout << "Copy Constructer Called" << std::endl;
}
RPN& RPN::operator=(const RPN &obj)
{
    if (this == &obj)
        return *this;
    numbers = obj.numbers;
    std::cout << "Copy assignment operator Called" << std::endl;
    return *this ;
}

RPN::~RPN()
{
    std::cout << "Destructer Called" << std::endl;
}