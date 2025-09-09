/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 01:09:11 by slimane           #+#    #+#             */
/*   Updated: 2025/09/09 02:44:35 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void f()
{
    system("leaks Brain");
}



int main() {
    std::cout << "=== Correct Classes (with virtual) ===" << std::endl;
    
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    const Animal *cdog = dog;

    std::cout << "Dog through Animal*: ";
    dog->makeSound();
    
    std::cout << "Copy Dog through Animal*: ";
    cdog->makeSound();

    std::cout << "Cat through Animal*: ";
    cat->makeSound(); 

    delete dog;
    delete cat;

  

    return 0;
}

