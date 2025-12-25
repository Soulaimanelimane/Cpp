/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:36:48 by slimane           #+#    #+#             */
/*   Updated: 2025/12/25 02:33:06 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}


ScalarConverter::ScalarConverter(const ScalarConverter & obj)
{
    *this = obj;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & obj)
{
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}


int ft_isint(std::string str)
{
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    if (i == str.length())
        return 0;
    for (size_t j = i; j < str.length(); j++)
    {
        if (!isdigit(str[j]))
            return 0;
    }
    long double var = std::strtold(str.c_str(), NULL);
    if (var > std::numeric_limits<int>::max() || var < std::numeric_limits<int>::min())
        return 0;
    
    return 1;
}

int ft_isfloat(std::string str)
{
    std::string tmp = str;
    if (str.find('.') == std::string::npos || str.find('f') == std::string::npos)
        return 0;
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    if (i == str.length())
        return 0;
    int count = 0;
    for (size_t j = i; j < str.length(); j++)
    {
        if (str[i] == '.' || str[i] == 'f')
            count++;
        if ((!isdigit(str[j]) && str[j] != '.' && str[j] != 'f') || count > 2)
            return 0;      
    }
    long double var = std::strtold(str.c_str(), NULL);
    if ((var > std::numeric_limits<float>::max() || var < -std::numeric_limits<int>::max()))
        return 0;
    return 1;
}

int ft_isdouble(std::string str)
{
    std::string tmp = str;
    size_t bar = str.find('.');
    if (bar != std::string::npos)
        tmp[bar] = '0';
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    if (i == str.length())
        return 0;
    int count = 0;
    for (size_t j = i; j < str.length(); j++)
    {
        if (str[i] == '.')
            count++;
        if ((!isdigit(str[j]) && str[j] != '.') || count > 1)
            return 0;      
    }
    return 1;
}

int define_type(std::string str)
{
    if (str.length() == 1 && (isprint(str[0]) && !isdigit(str[0])))
        return 1;
    else if (ft_isint(str))
        return 10;
    else if (ft_isfloat(str))
        return 20;
    else if (ft_isdouble(str))
        return 30;
    return -1;
}

void ft_print_char(std::istringstream &ss)
{
    char val;
    ss >> val;
    std::cout << "char: " <<  val << std::endl;
    std::cout << "int: " <<  static_cast<int>(val) << std::endl;
    std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: "  << static_cast<double>(val) << std::endl; 
}


void ft_print_int(std::istringstream &ss)
{
    int val;
    ss >> val;
    
    if (isprint(val))
        std::cout << "char: " <<  static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255 )
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;

    std::cout << "int: " <<  val << std::endl;
    std::cout << "float: "  << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
    
}



void ft_print_float(std::istringstream &ss)
{
    float val;
    ss >> val;
    if (isprint(val))
        std::cout << "char: " <<  static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255 )
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;

    if (static_cast<long long>(val) > std::numeric_limits<int>::max() ||  static_cast<long long>(val) < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " <<  static_cast<int>(val) << std::endl;

    if (val - (int)val == 0)
        std::cout << "float: "  << val << ".00f" << std::endl;
    else 
        std::cout << "float: "  << val << "f" << std::endl;
    if (val - (int)val == 0)
        std::cout << "double: " << static_cast<double>(val)   << ".00"<< std::endl;
    else
        std::cout << "double: " << static_cast<double>(val) << std::endl;
        
    
}

void    ft_print_double(std::istringstream &ss)
{
    double val = 0.0;
    ss >> val;
    if (isprint(val))
        std::cout << "char: " <<  static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255 )
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;
        

    if (static_cast<long long>(val) > std::numeric_limits<int>::max() ||  static_cast<long long>(val) < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " <<  static_cast<int>(val) << std::endl;

    
    std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " <<  val << std::endl; 
}


void ft_parse(std::string str)
{
    int def = define_type(str);
    if (def == -1)
    {
        std::cout << "invalid argument" << std::endl;
        std::exit(1);
    }
    std::istringstream ss(str);
    if (def == 1)
        ft_print_char(ss);
    else if (def == 10)
        ft_print_int(ss);
    else if (def == 20)
    {
        std::istringstream s(str.substr(0, str.length() - 1));
        ft_print_float(s);
    }
    else if (def == 30)
        ft_print_double(ss);
}

int is_inf(std::string  &str)
{
    if (str == "+inff" || str == "-inff" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: "<< str << std::endl;
        std::cout << "double: "<< str.substr(0, str.length() - 1) << std::endl;
        return (1);
    }
    else if (str == "+inf" || str == "-inf" || str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: "<< str + "f" << std::endl;
        std::cout << "double: "<< str << std::endl;
        return (1);
    }
    return (0);
}

void  ScalarConverter::convert(std::string str)
{
    if (is_inf(str))
        return ;
    ft_parse(str);
}