/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:03:41 by slimane           #+#    #+#             */
/*   Updated: 2025/12/24 23:11:08 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <cstdint>

typedef struct s_Data
{
    int num;
}   t_Data;


class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &obj);
        Serializer&operator=(const Serializer &obj);
        ~Serializer();
    public:

        static std::uintptr_t serialize(t_Data *ptr);
        static t_Data *deserialize(std::uintptr_t raw);
};


#endif 