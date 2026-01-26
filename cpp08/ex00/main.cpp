/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:15:48 by slimane           #+#    #+#             */
/*   Updated: 2026/01/26 23:21:32 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int main()
{
    std::vector<int> arr;
    arr.resize(5);
    for (size_t i = 0; i < arr.size(); i++)
        arr[i] = (i * i) + 6;
    easyfind(arr, 1220);
}