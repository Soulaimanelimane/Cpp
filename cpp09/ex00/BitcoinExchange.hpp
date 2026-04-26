/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:12:36 by slimane           #+#    #+#             */
/*   Updated: 2026/04/26 18:42:32 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
class BitcoinExchange
{
    private:
        std::map<std::string , unsigned int> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange & operator=(const  BitcoinExchange &obj);
        ~BitcoinExchange();

        void add_element(unsigned int value);
        
};




#endif