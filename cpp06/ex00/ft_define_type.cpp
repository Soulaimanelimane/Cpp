/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_type.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:19:52 by slimane           #+#    #+#             */
/*   Updated: 2026/06/08 00:35:58 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
    if (str.find('.') == std::string::npos || str.find('f') == std::string::npos)
        return 0;
    if (str.find('f') != str.length() - 1)
        return 0;
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    if (i == str.length())
        return 0;
    int count = 0;
    for (size_t j = i; j < str.length(); j++)
    {
        if (str[j] == '.' || str[j] == 'f')
            count++;
        if ((!isdigit(str[j]) && str[j] != '.' && str[j] != 'f') || count > 2)
            return 0;
    }
    long double var = std::strtold(str.c_str(), NULL);
    if ((var > std::numeric_limits<float>::max() || var < -std::numeric_limits<float>::max()))
        return 0;
    return 1;
}

int ft_isdouble(std::string str)
{
    if (str.find('.') == std::string::npos)
        return 0;
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    if (i == str.length())
        return 0;
    int count = 0;
    for (size_t j = i; j < str.length(); j++)
    {
        if (str[j] == '.')
            count++;
        if ((!isdigit(str[j]) && str[j] != '.') || count > 1)
            return 0;
    }
    long double var = std::strtold(str.c_str(), NULL);
    if ((var > std::numeric_limits<double>::max() || var < -std::numeric_limits<double>::max()))
        return 0;
    return 1;
}

int define_type(std::string str)
{
    if (str.length() == 0)
        return -1;
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