/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:28:15 by slimane           #+#    #+#             */
/*   Updated: 2026/01/20 17:37:47 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& obj) 
{
    *this = obj;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
    this->num = obj.num;
    return *this;
}

uintptr_t Serializer::serialize(t_Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
t_Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<t_Data *>(raw);
}

Serializer::~Serializer()
{
}


