/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:31:49 by slimane           #+#    #+#             */
/*   Updated: 2026/07/11 16:51:36 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
    std::cout << "Copy Constructor called" << std::endl;
}


void BitcoinExchange::add_db_element(std::pair<std::string , double> &db_data)
{
    this->db_data[db_data.first] = db_data.second;
    
}



std::map<std::string , double> &BitcoinExchange::get_db_data()
{
    return db_data;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    if (this == &obj)
        return *this;
    db_data = obj.db_data;
    std::cout << "copy assingment Called" << std::endl;
    return *this ;
}
 
BitcoinExchange::~BitcoinExchange()
{
    std::cout << "Destructor called" << std::endl;
}