/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:20:34 by slimane           #+#    #+#             */
/*   Updated: 2025/08/30 14:51:28 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av){
    if (ac != 2)
    {
        std::cerr << "ERROR the argument not valid it should be like this ./harlFilter [command]";
        return (1);
    }
    std::string level = av[1];
    Harl obj;
    obj.complain(level);
}