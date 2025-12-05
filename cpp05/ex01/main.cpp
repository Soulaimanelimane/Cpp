/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:48:09 by slimane           #+#    #+#             */
/*   Updated: 2025/12/04 17:16:10 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat obj;
        Form first_form("tamghra", 5, 3);
        Form second_form("CTF", 150, 175);
        std::cout << first_form.getSignd() << std::endl;
        std::cout << second_form.getSignd() << std::endl;
        obj.signForm(first_form);
        obj.signForm(second_form);
        std::cout << first_form.getSignd() << std::endl;
        std::cout << second_form.getSignd() << std::endl;
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cerr << e.what();
    }
    catch (const Form::GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
        
}