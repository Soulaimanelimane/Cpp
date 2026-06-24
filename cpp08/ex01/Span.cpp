/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:51:03 by slimane           #+#    #+#             */
/*   Updated: 2026/06/15 23:20:36 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
    sz = 0;
    std::cout << "the default Constructor Called" << std::endl;
}

Span::Span(unsigned int n)
{
    N = n; 
    sz = 0;
    std::cout << "the parametrize operator Called" << std::endl;
}

Span::Span(const Span &obj)
{
    *this = obj; 
    std::cout << "the Copy Constructor Called" << std::endl;
}

Span& Span::operator=(const Span &obj)
{
    arr = obj.arr;
    N = obj.N;
    sz = obj.sz;
    std::cout << "the Copy assingment operator Called" << std::endl;
    return *this;
}

void Span::addNumber(int n)
{
    arr.push_back(n);
    sz++;
}

int Span::shortestSpan()
{
    int mn =  std::numeric_limits<int>::max();
    for (size_t i = 0; i < arr.size(); i++)
    {
        int tmp_min = 0;
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            tmp_min = abs(arr[i] - arr[j]);
            if (tmp_min  < mn)
                mn = tmp_min;
        }
    }
    return mn;
}

int Span::longestSpan()
{
    if (arr.size() == 1)
        return 0;
    std::vector<int>::iterator mn = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator mx = std::max_element(arr.begin(), arr.end());
    return *mx - *mn;
}

Span::~Span()
{
    std::cout << "Destructor Called" << std::endl;
}

