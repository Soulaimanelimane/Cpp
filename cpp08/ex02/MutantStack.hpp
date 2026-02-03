/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:21:47 by marvin            #+#    #+#             */
/*   Updated: 2026/02/02 19:21:47 by marvin           ###   ########.fr       */
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
    MutantStack( const typename std::stack<T>::container_type &containe) : std::stack<T>(containe) {}
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}


    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    /* Iterator access */
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