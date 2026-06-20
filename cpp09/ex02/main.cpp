/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 04:40:05 by slimane           #+#    #+#             */
/*   Updated: 2026/06/20 04:40:05 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac , char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: the program only accepts arguments like this : ./PmergeMe numbers" << std::endl;
        return 1;
    }
    av++;
    PmergeMe obj(av);
    return 0;
}