/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:34:37 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 21:57:38 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
    private :
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string ideas[100]);
        Brain(const Brain &obj);
        Brain & operator =(const Brain &obj);

        ~Brain();
};

#endif
