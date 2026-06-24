/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:00:46 by slimane           #+#    #+#             */
/*   Updated: 2026/06/17 18:05:44 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    try
    {
        std::vector<int> arr;
        arr.push_back(6);
        arr.push_back(3);
        arr.push_back(17);
        arr.push_back(9);
        arr.push_back(11);
        Span obj(arr.size());
        obj.addNumbers(arr.begin(), arr.end());

        std::cout << obj.shortestSpan() << std::endl;
        std::cout << obj.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    

}