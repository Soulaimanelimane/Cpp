/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:33:19 by slimane           #+#    #+#             */
/*   Updated: 2025/10/07 17:23:55 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.h"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "argument sould be like this: a filename and two strings, s1 and s2" << std::endl;
        return (1);
    }
    Line text;
    std::string line;
    std::string file(av[1]);
    std::ifstream inputfile(file);
    if (!inputfile.is_open())
    {
        std::cerr << "the file " + file + " can't be open" << std::endl ; 
        return 1;
    }
    text.set_str(av[2], 1);
    text.set_str(av[3], 2);
    getline(inputfile, line, '\0');
    if (line.size() == 0)
    {
        std::cout <<"the file is an empty file " << std::endl ;
        return (1);
    }
    text.set_str(line, 0);
    std::ofstream replace_file(file + ".replace");
    ft_replace_lines(text, 0, replace_file);
}