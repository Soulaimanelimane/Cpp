/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:12:36 by slimane           #+#    #+#             */
/*   Updated: 2026/07/11 16:50:17 by slimane          ###   ########.fr       */
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
        std::map<std::string , double> db_data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange & operator=(const  BitcoinExchange &obj);
        ~BitcoinExchange();
        
        void add_db_element(std::pair<std::string , double > &db_data);

        std::map<std::string , double> &get_db_data();
        
};

#endif