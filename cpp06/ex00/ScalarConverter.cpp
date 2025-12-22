/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:36:48 by slimane           #+#    #+#             */
/*   Updated: 2025/12/22 01:42:06 by slimane          ###   ########.fr       */
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
    return 1;
}

int ft_isfloat(std::string str)
{
    std::string tmp = str;
    if (str.find('.') == std::string::npos && str.find('f') == std::string::npos)
        return 0;
    tmp[str.find('.')] = '0';
    if (!ft_isint(tmp.substr(0, tmp.length() - 1)))
        return 0;
    return 1;
}

int ft_isdouble(std::string str)
{
    std::string tmp = str;
    if (str.find('.') == std::string::npos)
        return 0;
    tmp[str.find('.')] = '0';
    if (!ft_isint(tmp))
        return 0;
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
    {
        char val;
        ss >> val;
        std::cout << "char: " <<  val << std::endl;
        std::cout << "int: " <<  static_cast<int>(val) << std::endl;
        std::cout << "float: " << std::fixed << static_cast<float>(val) << "f" << std::endl;
        std::cout << "double: " <<  std::fixed << static_cast<double>(val) << std::endl;   
    }
    else if (def == 10)
    {
        int val;
        ss >> val;
        if (isprint(val))
            std::cout << "char: " <<  static_cast<char>(val) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " <<  val << std::endl;
        std::cout << "float: " << std::fixed << static_cast<float>(val) << "f" << std::endl;
        std::cout << "double: " <<  std::fixed << static_cast<double>(val) << std::endl;  
    }
    else if (def == 20)
    {
        float val;
        ss >> val;
        if (isprint(val))
            std::cout << "char: " <<  static_cast<char>(val) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " <<  static_cast<int>(val) << std::endl;
        std::cout << "float: " << std::fixed << val << "f" << std::endl;
        std::cout << "double: " <<  std::fixed << static_cast<double>(val) << std::endl;  
    }
    else if (def == 30)
    {
        long double val;
        ss >> val;
        if (isprint(val))
            std::cout << "char: " <<  static_cast<char>(val) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
            
        std::cout << "int: " <<  static_cast<int>(val) << std::endl;
        std::cout << "float: " << std::fixed << static_cast<float>(val) << "f" << std::endl;
        std::cout << "double: " <<  val << std::endl; 
    }
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