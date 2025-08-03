/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:28:58 by slimane           #+#    #+#             */
/*   Updated: 2025/07/29 18:28:59 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char  **av)
{
    int i = 1;
    int j = 0;
    (void)ac;
    while (av[i])
    {
        j= 0;
        while (av[i][j])
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        i++;
    }

    return (0);
}