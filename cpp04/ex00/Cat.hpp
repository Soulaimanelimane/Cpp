/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:51:40 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 01:48:23 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
class Cat : public Animal {
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat &obj);
        Cat &operator = (const Cat &obj);
        void makeSound() const;
        virtual ~Cat();
};
#endif 

