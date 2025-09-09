/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 01:07:35 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 01:48:17 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal {
    public :
        Dog();
        Dog(std::string type);
        Dog(const Dog &obj);
        Dog &operator = (const Dog &obj);
        void makeSound() const ;
        virtual ~Dog();
};
#endif 