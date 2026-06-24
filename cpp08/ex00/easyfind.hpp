/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:51:24 by slimane           #+#    #+#             */
/*   Updated: 2026/06/17 18:05:47 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>

template <typename T> 
int easyfind(const T &prm, int n)
{
    typename T::const_iterator it = std::find(prm.begin(), prm.end(), n);
    if (it  == prm.end())
        throw std::out_of_range("not found in the container");
    return std::distance(prm.begin() , it);
}

#endif