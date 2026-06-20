/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 04:43:16 by slimane           #+#    #+#             */
/*   Updated: 2026/06/20 04:43:16 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int ft_atoi(char *str)
{
    long res = 0;
    long max = std::numeric_limits<int>::max();
    if (!str)
        return -1;
    if (str[0] == '-')
        return -1;
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return -1;
        res = res * 10 + (str[i] - '0');
        if (res > max)
            return -1;
        i++;
    }
    return static_cast<int>(res);
}

PmergeMe::PmergeMe(char **av)
{
    int i = 0;
    while (av[i])
    {
        int var = ft_atoi(av[i])
        if (var < 0)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        vec.push_back(var);
        deq.push_back(var);
        i++;
    }
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    if (this != &obj)
        return *this;
    _vec = obj._vec;
    _deq = obj._deq;
    return *this;
}

PmergeMe::~PmergeMe()
{
}
