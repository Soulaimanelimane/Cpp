/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:42:04 by slimane           #+#    #+#             */
/*   Updated: 2026/06/14 17:57:04 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> numbers;
    public:
        RPN();
        RPN(std::string str);
        RPN(const RPN &obj);
        RPN& operator=(const RPN &obj);
        ~RPN();
};




#endif