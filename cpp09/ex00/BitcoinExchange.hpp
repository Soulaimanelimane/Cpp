/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:12:36 by slimane           #+#    #+#             */
/*   Updated: 2026/04/27 20:19:55 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string , unsigned int> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange & operator=(const  BitcoinExchange &obj);
        ~BitcoinExchange();

        void add_element(std::pair<std::string , unsigned int > data);
        
};




#endif