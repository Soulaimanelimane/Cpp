/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:39:33 by slimane           #+#    #+#             */
/*   Updated: 2026/01/25 21:00:06 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Array.hpp"


int main()
{
    Array<int> a(5);
    std::cout << "the size of array is " << a.size() << std::endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        a[i] = i;
    }

    Array<int> b(a);
    b[0] = 11;
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << "  " << b[i] << std::endl;
    }
    
    Array<std::string> str(3);
    std::cout << "the size of array is " << str.size() << std::endl;
    str[0] = "1337";
    str[1] = "KH";
    str[2] = "42";
    Array<std::string> cp(str);
    cp[2] = "BN";
    for (size_t i = 0; i < str.size(); i++)
        std::cout << str[i] << "  " << cp[i] <<  std::endl;
    
}   
