/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:03:19 by slimane           #+#    #+#             */
/*   Updated: 2025/12/26 18:10:08 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cmath>

Base * generate(void)
{
    int i = std::rand() % 3; 

    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base *p)
{
    if (!p)
        return ;
    std::cout << "From pointer identify the pointer is of type : ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    std::cout << "From refenrence identify the pointer is of type : ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }   
        }
    }
}

int main()
{
    std::srand(time(NULL));
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
}