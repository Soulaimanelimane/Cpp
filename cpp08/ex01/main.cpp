/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:00:46 by slimane           #+#    #+#             */
/*   Updated: 2026/01/27 12:08:36 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::vector<int> arr;

    for (size_t i = 0; i < 10000; i++)
    {
        arr.push_back((i*5)-(i+2));
    }
    Span obj(10000);
    obj.addNumbers(arr.begin(), arr.end());

    std::vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        std::cout << *it << std::endl; 
    }
    
}