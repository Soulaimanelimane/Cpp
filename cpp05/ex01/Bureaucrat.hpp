/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:35:21 by slimane           #+#    #+#             */
/*   Updated: 2025/12/21 18:25:24 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURAUCRAT_HPP
#define BURAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string n, int grd);
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        const std::string &getName() const;
        int getGrade() const;

        void increment_grade();
        void decrement_grade();
        

        void signForm(Form &obj);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        
};

std::ostream & operator<<(std::ostream &out , Bureaucrat & obj);


#endif