/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:48:09 by slimane           #+#    #+#             */
/*   Updated: 2025/11/24 17:45:31 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj;
        std::cout << obj ;
        obj.decrement_grade();
        obj.decrement_grade();
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