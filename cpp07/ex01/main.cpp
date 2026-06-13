/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:55:37 by slimane           #+#    #+#             */
/*   Updated: 2026/06/13 20:29:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T> 
void ft_print(T str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str[] = {"1337 " , "khouribga " , "2026"};
    int arr[] = {3,65,1};
    iter(str, 3, ft_print<std::string>);
    iter(arr, 3, ft_print<int>);
}