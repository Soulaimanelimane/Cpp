/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:51:03 by slimane           #+#    #+#             */
/*   Updated: 2026/01/27 00:00:41 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
    sz = 0;
    arr.resize(0);
    std::cout << "the default Constructor Called" << std::endl;
}

Span::Span(unsigned int n)
{
    N = n; 
    sz = 0;
    arr.resize(N);
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
}

void Span::addNumber(int n)
{
    if (sz > arr.size())
        throw std::out_of_range("the Span is full");
    arr.push_back(n);
    sz++;
}

int Span::shortestSpan()
{
    std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
    return (*min);
}

int Span::longestSpan()
{
    std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());
    return (*max);
}

Span::~Span()
{
    std::cout << "Destructor Called" << std::endl;
}