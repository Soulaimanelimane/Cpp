/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:33:23 by slimane           #+#    #+#             */
/*   Updated: 2026/04/26 20:53:28 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_line_format(std::string &str)
{
    if (str.find(" |") == std::string::npos)
    {
        std::cout << "the format of data should be date | value";
        return 0;
    }
    size_t ps = str.find(" |");
    std::string s = str.substr(0, ps);
    if (s.length() != 10)
    {
        std::cout << "format of date should be YYYY-MM-DD" << std::endl;
        return 0;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        if (!isdigit)
    }
    
    return 0;
}

int main(int ac , char **av)
{
    if (ac != 2)
    {
        std::cout << "you should run the program  like this ./btc <input_file> ;" << std::endl;
        return 1;
    }
    
    std::ifstream file(av[1]);

    if (!file.is_open()) {
        std::cout << "Error: Could not open file!" << std::endl;
        return 1;
    }
    std::string str;
    int itr = 0;
    while (std::getline(file, str))
    {
        if (itr >  0 && str == "date | value")
        {
            std::cout << "Error: format file is worng the file should start with date | value" << std::endl;;
            return 1;
        }
        if (check_line_format(str) == 1)
            exit(1);
        itr++;
    }
}