/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:03:41 by slimane           #+#    #+#             */
/*   Updated: 2025/12/14 15:45:26 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <cstdint>
class Serializer
{
    private:
        /* data */
    public:
        Serializer();
        Serializer(const Serializer &obj);
        Serializer&operator=(const Serializer &obj);
        ~Serializer();

        std::uintptr_t serialize(void* ptr);
        void* deserialize(std::uintptr_t raw);
};


Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

#endif 