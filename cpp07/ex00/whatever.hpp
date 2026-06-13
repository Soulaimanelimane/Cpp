/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:50:53 by slimane           #+#    #+#             */
/*   Updated: 2026/06/13 20:22:08 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include  <iostream>
#include  <string>

template <typename S> void swap(S &a, S &b)
{
    S swp;
    swp = a;
    a = b;
    b = swp;
}

template <typename M> M min(M a, M b)
{
    if (a < b)
        return a;
    return b;
}


template <typename M> M max(M a, M b)
{
    if (a > b)
        return a;
    return b;
}

#endif