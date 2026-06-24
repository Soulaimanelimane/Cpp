/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:15:48 by slimane           #+#    #+#             */
/*   Updated: 2026/06/15 22:20:13 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int main()
{
    try
    {        
        std::vector<int> arr(5);
        for (size_t i = 0; i < arr.size(); i++)
        {
            arr[i] = (i * i) + 6;
            // std::cout << (i * i) + 6 << std::endl;
        }
        int pos = easyfind(arr, 2005) ;
        std::cout << "the element is in the postion " << pos  << " and is " <<  arr[pos] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}