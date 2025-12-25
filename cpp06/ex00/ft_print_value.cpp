/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_value.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:03:14 by slimane           #+#    #+#             */
/*   Updated: 2025/12/25 19:38:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ft_print_char(std::istringstream &ss)
{
    char val;
    ss >> val;
    std::cout << "char: " << val << std::endl;
    std::cout << "int: " << static_cast<int>(val) << std::endl;
    std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void ft_print_int(std::istringstream &ss)
{
    int val;
    ss >> val;

    if (isprint(val))
        std::cout << "char: " << static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;

    std::cout << "int: " << val << std::endl;
    std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void ft_print_float(std::istringstream &ss)
{
    float val;
    ss >> val;
    if (isprint(val))
        std::cout << "char: " << static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;

    if (static_cast<long long>(val) > std::numeric_limits<int>::max() || static_cast<long long>(val) < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(val) << std::endl;

    if (val - (long long)val == 0)
        std::cout << "float: " << val << ".00f" << std::endl;
    else
        std::cout << "float: "  << val << "f" << std::endl;
    if (val - (long long)val == 0)
        std::cout << "double: " << static_cast<double>(val) << ".00" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void ft_print_double(std::istringstream &ss, std::string &str)
{
    double val = 0.0;
    ss >> val;
    if (isprint(val))
        std::cout << "char: " << static_cast<char>(val) << std::endl;
    else if (val >= 0 && val <= 255)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: Impossible" << std::endl;

    if (static_cast<long long>(val) > std::numeric_limits<int>::max() || static_cast<long long>(val) < std::numeric_limits<int>::min())
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(val) << std::endl;

    if (val > std::numeric_limits<float>::max() || val < -std::numeric_limits<float>::max())
        std::cout << "float: Impossible" << std::endl;
    else
    {
        if (val - (long long)val == 0)
            std::cout << "float: " << static_cast<float>(val) << ".00f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    }

    if (std::to_string(val) != str)
        std::cout << "double: Impossible" << std::endl;
    else
    {
        if (val - (long long)val == 0)
            std::cout << "double: " << val << ".00" << std::endl;
        else
            std::cout << "double: " << val << std::endl;
    }
}
