/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:50:56 by slimane           #+#    #+#             */
/*   Updated: 2026/06/10 22:28:23 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits>


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
    public:
        static void convert(std::string str);
};

void    ft_print_char(std::string &ss);
void    ft_print_int(std::istringstream &ss);
void    ft_print_float(std::istringstream &ss);
void    ft_print_double(std::istringstream &ss);
int     ft_isint(std::string str);
int     ft_isfloat(std::string str);
int     ft_isdouble(std::string str);
int     define_type(std::string str);
#endif