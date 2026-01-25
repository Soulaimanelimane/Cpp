/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:02:46 by slimane           #+#    #+#             */
/*   Updated: 2026/01/22 20:19:35 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename I, typename F>


void iter(I *adrs, const size_t size, F &f)
{
    if (!adrs)
        return ; 
    for (size_t i = 0; i < size; i++)
        f(adrs[i]);
}

#endif