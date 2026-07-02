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
        if (str[i] == ' ') {
            continue;
        }
        else if (isdigit(str[i])) {
            numbers.push(str[i] - '0');
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (numbers.size() < 2) {
                std::cerr << "Error" << std::endl;
                return;
            }

            int value2 = numbers.top();
            numbers.pop();
            int value1 = numbers.top();
            numbers.pop();

            if (str[i] == '+')
                numbers.push(value1 + value2);
            else if (str[i] == '-')
                numbers.push(value1 - value2);
            else if (str[i] == '*')
                numbers.push(value1 * value2);
            else if (str[i] == '/') {
                if (value2 == 0) {
                    std::cerr << "Error" << std::endl;
                    return;
                }
                numbers.push(value1 / value2);
            }
        }
        else {
            std::cerr << "Error" << std::endl;
            return;
        }
    }

    if (numbers.size() != 1) {
        std::cerr << "Error" << std::endl;
        return;
    }

    std::cout << numbers.top() << std::endl;

    
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