/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:14:33 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 01:43:37 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &obj);
        Animal & operator = (const Animal &obj);
        virtual ~Animal();

        virtual void makeSound() const ;
        std::string getType() const ;
};
#endif 