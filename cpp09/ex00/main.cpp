/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:33:23 by slimane           #+#    #+#             */
/*   Updated: 2026/07/11 16:52:40 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float ft_atoi(std::string &str)
{
    float res  = 0.0;
    int count = 0;
    float dv = 1.00;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            count++;
        if ((!isdigit(str[i]) && str[i] != '.') || count > 1)
            return -1;
        if (str[i] != '.')
        {
            res = (res * 10.0f) + (str[i] - '0');
            if (count == 1)
                dv *= 10.0f;
        }
        if ((res / dv) > 1000.00f)
            return 1001;
    }
    return (res / dv);
}

int check_line_format(std::string &str, std::string &dt , double &val)
{
    if (str.find(" | ") == std::string::npos)
    {
        std::cout << str << " => "  << " ERROR : the format of data should be date | value" << std::endl; 
        return -1;
    }
    size_t ps = str.find(" |");
    std::string s = str.substr(0, ps);
    std::string date_format =  "ERROR : format of date should be YYYY-MM-DD";
    if (s.length() != 10)
    {
        std::cout << date_format << std::endl;
        return -1;
    }
    int count = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]) && s[i] != '-')
        {
            std::cout << date_format  << " && ERROR : date should contain only (0,9) && -" << std::endl;
            return -1;
        }
        if (s[i] == '-')
            count++;
        if (count > 2)
        {
            std::cout << date_format << std::endl ;
            return -1;
        }
    }
    std::string  result[3];
    std::string token;
    std::istringstream iss(s);

    int j = 0;
    while (std::getline(iss, token, '-') && j < 3)
    {
        if (!token.empty()) 
            result[j] = token;
        j++;
    }
    std::string str_year = result[0];
    std::string str_month = result[1];
    std::string str_day = result[2];

    if (str_year.length() != 4 || str_month.length()!= 2 || str_day.length() != 2)
    {
        std::cout << date_format << std::endl;
        return -1;
    }
    int year = std::atoi(str_year.c_str());
    int month = std::atoi(str_month.c_str());
    int day = std::atoi(str_day.c_str());
    if (year <= 0 || month <= 0 || day <= 0)
    {
        std::cout << date_format << " with values not just 0 or emoty values " << std::endl;
        return -1;
    }
    if (month > 12)
    {
        std::cout << date_format << " it should be a valid month values" << std::endl;
        return -1;
    }
    if (day > 31 || (month == 2 && day > 29))
    {
        std::cout << date_format << " it days should be between 1 31 except for fev should be 28 || 29" << std::endl;
        return -1;
    }

    std::string str_data = str.substr(ps + 3);
    if (str_data.empty())
    {
        std::cout << " ERROR : the format of data should be date | value" << std::endl;
        return -1;
    }
    float value = ft_atoi(str_data);
    if (value < 0 || value > 1000)
    {
        std::cout << " A valid value must be either a float or a positive integer, between 0 and 1000." << std::endl;
        return -1;
    }
    dt = s;
    val = value;
    return (value);
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
    std::string date;
    double value = 0;

    std::ifstream db_file("./data.csv");
    std::string db_str;
    BitcoinExchange db_data;
    if (!db_file.is_open()) {
        std::cout << "Error: Could not open db file!" << std::endl;
        return 1;
    }
    std::getline(db_file, db_str);
    while (std::getline(db_file, db_str))
    {
        if (db_str.empty())
        {
            std::cout << "invalid empty line" << std::endl;
            continue;
        }
        std::pair<std::string , double> db_pr;
        size_t fn = db_str.find(",");
        if (fn != std::string::npos)
        {
            std::string dt = db_str.substr(0, fn);
            db_pr.first  = dt;
            db_pr.second = std::atof(db_str.substr(fn + 1).c_str());
            db_data.add_db_element(db_pr);

        }
        else
            std::cout << "invalid line format it  should be date | value" << std::endl;
    }

    std::map<std::string , double> &map_db_data = db_data.get_db_data();

    std::getline(file, str);
    if (str != "date | value")
        std::cout << "Error: format file is worng the file should start with date | value" << std::endl;
    while (std::getline(file, str))
    {
        if (str.empty())
        {
            std::cout << "invalid empty line" << std::endl;
            continue;
        }
        if (str == "date | value")
        {
            std::cout << "Error: format file is worng the file should start with date | value" << std::endl;;
            continue;
        }
        if (check_line_format(str, date, value) == -1)
            continue;

            
        std::map<std::string, double>::iterator it = map_db_data.lower_bound(date);  

        if (it->first == date)
            std::cout << it->first << " => " <<  it->second << " "  << double(value *  it->second) << std::endl;
        else if (it == map_db_data.end())
        {
            it--;
            std::cout << it->first << " => " <<  it->second << " "  << double(value *  it->second)  << std::endl;
        }
        else if (it == map_db_data.begin())
            std::cout <<  "invalid date => " << date << std::endl;
        else
        {
            it--;
            std::cout << it->first << " => " <<  it->second << " "  << double(value *  it->second)  << std::endl;
        }
    }

    
    // std::map<std::string , unsigned int> &map_data = data.get_data();
    // std::map<std::string , double> &map_db_data = db_data.get_db_data();

    // std::map<std::string , unsigned int>::iterator mp = map_data.begin();
    // while (mp != map_data.end())
    // {
    //     std::cout <<  "-" << mp->first << "-" << std::endl;
    //     std::map<std::string, double>::iterator it = map_db_data.lower_bound(mp->first);  
    //     if (it->second == mp->second)
    //         std::cout << it->first << " => " <<  it->second << " "  << double(mp->second *  it->second) << std::endl;
    //     else if (it == map_db_data.end())
    //     {
    //         it--;
    //         std::cout << it->first << " => " <<  it->second << " "  << double(mp->second *  it->second)  << std::endl;
    //     }
    //     else if (it == map_db_data.begin())
    //         std::cout <<  "invalid date => " << mp->first << std::endl;
    //     else
    //     {
    //         it--;
    //         std::cout << it->first << " => " <<  it->second << " "  << double(mp->second *  it->second)  << std::endl;
    //     }
    //     mp++;
    // }
    
}