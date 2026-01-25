/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:55:37 by slimane           #+#    #+#             */
/*   Updated: 2026/01/22 20:20:05 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T> 
void ft_print(T str)
{
    std::cout << str << std::endl;
}

int main(int ac, char **av)
{
    ac++;
    // std::string str[] = {"1337 " , "khouribga " , "2026"};
    // int arr[] = {3,65,1};
    char *p = av[1];
    iter(p, 4, ft_print<char>);
}