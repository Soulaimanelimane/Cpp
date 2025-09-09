/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 00:51:40 by slimane           #+#    #+#             */
/*   Updated: 2025/09/08 18:17:04 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal {
    private:
        Brain *br;
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat &obj);
        Cat &operator = (const Cat &obj);
        void makeSound() const;
        virtual ~Cat();
};
#endif 

