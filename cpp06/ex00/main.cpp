/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:45:55 by slimane           #+#    #+#             */
/*   Updated: 2025/12/16 18:26:00 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int ft_isint(std::string str)
{
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-')
        i = 1;
    for (i; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int ft_isfloat(std::string str)
{
    std::string tmp = str;
    if (str.find('.') == std::string::npos && str.find('f') == std::string::npos)
    {
        return 0;
    }
    else if ((tmp[str.find('.')] = 0) && !ft_isint(tmp.substr(0, tmp.length() - 1)))
    {
        std::cout << str.substr(0, str.length() - 1) << std::endl;   
        return 0;
        
    }
    else if (str != "+inff" && str != "-inff" && str != "nanf")
    {
        
        std::cout << "str3" << std::endl;
        return 0;
    }
    return 1;
}

int ft_isdouble(std::string str)
{
    if (str != "+inf" && str != "-inf" && str != "nan")
        return 0;
    return 1;
}

int define_type(std::string str)
{
    if (str.length() == 1 && isalpha(str[0]))
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
    std::istringstream s(str);

        
    int def = -1;
    def = define_type(str);
    if (def == -1)
    {
        std::cout << "the value you entered not valid" << std::endl;
        std::exit(1);
    }
    double res ;
    s >> res;
    if (s.eof())
       std::cout << "not compatible" << std::endl;
    
    std::cout << res << std::endl;
}

int main(int ac, char **av)
{
    float d = 12.00f;
    if (ac != 2)
        return 1;
    ft_parse(av[1]);
}