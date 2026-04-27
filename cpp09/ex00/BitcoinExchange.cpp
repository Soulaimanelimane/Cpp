/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:31:49 by slimane           #+#    #+#             */
/*   Updated: 2026/04/27 20:21:02 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    data = obj.data;
    std::cout << "Constructor called" << std::endl;
}

void BitcoinExchange::add_element(std::pair<std::string , unsigned int > data)
{
    this->data[data.first] = data.second;
    
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    if (this == &obj)
        return *this;
    data = obj.data;
    std::cout << "copy assingment Called" << std::endl;
    return *this ;
}
 
BitcoinExchange::~BitcoinExchange()
{
}