/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:21:47 by marvin            #+#    #+#             */
/*   Updated: 2026/06/17 19:34:48 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP


#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack( const typename std::stack<T>::container_type &obj) : std::stack<T>(obj) {}
    MutantStack(const MutantStack &obj) : std::stack<T>(obj) {}
    MutantStack &operator=(const MutantStack &obj)
    {
        if (this != &obj)
            std::stack<T>::operator=(obj);
        return *this;
    }
    ~MutantStack() {}


    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

    const_iterator begin() const
    {
        return this->c.begin();
    }

    const_iterator end() const
    {
        return this->c.end();
    }
};




#endif 