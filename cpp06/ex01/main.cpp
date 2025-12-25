/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 23:08:24 by slimane           #+#    #+#             */
/*   Updated: 2025/12/24 23:21:23 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    t_Data n;
    n.num = 2005;
    
    
    t_Data *p = &n;
    
    std::uintptr_t boa = Serializer::serialize(p);
    t_Data *re_p = Serializer::deserialize(boa);
    std::cout << "uintptr_t "  << boa << std::endl;
    std::cout  << "real p " << p << std::endl;
    std::cout  << "fake p " << re_p << std::endl;

    

    std::cout << "real's value " <<  p->num << std::endl;
    std::cout << "fake's  value " << re_p->num  << std::endl;
    
    
}