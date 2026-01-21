/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:03:41 by slimane           #+#    #+#             */
/*   Updated: 2026/01/20 17:33:31 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <stdint.h>

typedef struct s_Data
{
    int num;
}   t_Data;


class Serializer
{
    private:
    public:
        int num;
        Serializer();
        Serializer(const Serializer &obj);
        Serializer&operator=(const Serializer &obj);
        ~Serializer();

        static uintptr_t serialize(t_Data *ptr);
        static t_Data *deserialize(uintptr_t raw);
};


#endif 