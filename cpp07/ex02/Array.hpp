/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:27:07 by slimane           #+#    #+#             */
/*   Updated: 2026/06/13 22:24:31 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>


template <typename T> class Array
{
    private:
        T *elem;
        size_t len;
    public:
        Array()
        {
            elem = NULL;
            len = 0;
            std::cout << "the default constructor called " << std::endl;
        };
        Array(unsigned int n)
        {
            elem =  new T[n]();
            len = n;
            std::cout << "the parametrize Constructor Called" << std::endl;
        };
        Array(const Array &obj)
        {
            elem = NULL;
            len  = 0;
            *this = obj;
            std::cout << "the Copy Constructor Called" << std::endl;
        };
        Array &operator=(const Array &obj)
        {
            if (this == &obj)
                return *this;
            if (elem != NULL)
                delete[] elem;
            elem = new T[obj.len];
            len = obj.len;
            for (size_t i = 0; i < len; i++)
                elem[i] = obj.elem[i];
                
            std::cout << "the Copy assignment operator Called" << std::endl;
            return *this;
        };

        T &operator[](unsigned int n)
        {
            if (n >= len)
                throw std::out_of_range("the index you want to access to is out of range");
            return elem[n];
        };
        size_t size() const
        {
            return (len);
        };
        ~Array()
        {
            delete[] elem;
            std::cout << "the Destructor Called" << std::endl;
        };
};

#endif