/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:36:48 by slimane           #+#    #+#             */
/*   Updated: 2025/12/25 18:26:58 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
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
        ft_print_double(ss, str);
}

int is_inf(std::string &str)
{
    if (str == "+inff" || str == "-inff" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
        return (1);
    }
    else if (str == "+inf" || str == "-inf" || str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str + "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return (1);
    }
    return (0);
}

void ScalarConverter::convert(std::string str)
{
    if (is_inf(str))
        return;
    ft_parse(str);
}