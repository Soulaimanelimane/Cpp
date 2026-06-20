/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:43:30 by slimane           #+#    #+#             */
/*   Updated: 2026/06/14 18:04:12 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac , char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error:the program only takes arguments like this ./RPN \"{numbers}\" " << std::endl;
        return 1;
    }

    RPN obj(av[1]);
}