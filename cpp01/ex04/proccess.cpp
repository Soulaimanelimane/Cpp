/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proccess.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:11:11 by slimane           #+#    #+#             */
/*   Updated: 2025/08/30 10:18:23 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"

void ft_replace_lines(Line file, int flag, std::ofstream &outfile)
{
    std::string line = file.get_str(flag);
    std::string find = file.get_str(1);
    std::string replace = file.get_str(2);
    std::string result;

    size_t i = 0;
    while (i < line.size())
    {
        size_t j = 0;
        while (j < find.size() && i + j < line.size() && line[i + j] == find[j])
            j++;

        if (j == find.size())
        {
            result += replace;
            i += find.size();
        }
        else
        {
            result += line[i];
            i++;
        }
    }

    outfile << result;
}

