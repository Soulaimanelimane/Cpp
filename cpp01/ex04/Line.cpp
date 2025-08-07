/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:01:00 by slimane           #+#    #+#             */
/*   Updated: 2025/08/06 12:06:31 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"

Line::Line(void)
{
    line = "";
    s1 = "";
    s2 = "";
}

void Line::set_str(std::string s, int  flag)
{
    if (flag == 0)
        line = s;
    else if (flag == 1)
        s1 = s;
    else if (flag == 2)
        s2 = s;
}
std::string  Line::get_str( int  flag)
{
    if (flag == 0)
        return (line);
    else if (flag == 1)
        return  (s1);
    else if (flag == 2)
        return (s2);
    return ("");
}