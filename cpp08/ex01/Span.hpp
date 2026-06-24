/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:25:30 by slimane           #+#    #+#             */
/*   Updated: 2026/06/15 23:10:42 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <vector>
#include <iostream>
#include <exception>

class Span
{
    private:
        unsigned int N;
        unsigned int sz;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        Span& operator=(const Span &obj);
        ~Span();
        
        void addNumber(int num);
        int  shortestSpan();
        int  longestSpan();
        template <typename it> void addNumbers(it bg, it ed)
        {
            size_t ds = std::distance(bg, ed);
            if (ds + sz > N)
                throw std::out_of_range("size of the element is more than the capacity of the span");
            for(it i = bg; i != ed; i++)
                addNumber(*i);
        
            
        }
};




#endif