/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:48:09 by slimane           #+#    #+#             */
/*   Updated: 2025/12/25 22:05:49 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("omar", 3);
        std::cout << obj ;
        obj.decrement_grade();
        obj.increment_grade();
        std::cout << obj ;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what();
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
        
}