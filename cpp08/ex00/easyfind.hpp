/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:51:24 by slimane           #+#    #+#             */
/*   Updated: 2026/01/26 23:15:28 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

template <typename T> 
void easyfind(const T &prm, int n)
{
    typename T::const_iterator it = std::find(prm.begin(), prm.end(), n);
    if (it  != prm.end())
        std::cout << std::distance(prm.begin(), it) << std::endl;
    else
        std::cout << "the element not found" << std::endl;
}

#endif