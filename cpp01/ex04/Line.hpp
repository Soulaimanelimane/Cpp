/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:58:51 by slimane           #+#    #+#             */
/*   Updated: 2025/08/06 12:05:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_HPP
#define LINE_HPP
#include <iostream>
#include <string>
#include <fstream>

class Line {
    private :
        std::string line;
        std::string s1;
        std::string s2;
    public :
        Line();
        void set_str(std::string s, int flag);
        std::string get_str(int flag);
};
#endif 