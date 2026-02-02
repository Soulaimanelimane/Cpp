/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:25:30 by slimane           #+#    #+#             */
/*   Updated: 2026/01/26 23:54:34 by slimane          ###   ########.fr       */
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
            if (ds +sz > N)
            {
                throw "the size is not enough\n";
            }
            for(it i = bg; i != ed; i++)
                addNumber(*i);
        }
};




#endif