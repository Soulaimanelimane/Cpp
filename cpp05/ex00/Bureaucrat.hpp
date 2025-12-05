/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:35:21 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 12:58:54 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURAUCRAT_HPP
#define BURAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        const std::string &getName() const;
        int getGrade() const;

        void increment_grade();
        void decrement_grade();
        

        class GradeTooHighException : public std::exception {
      
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        
};

std::ostream & operator<<(std::ostream &out , Bureaucrat & obj);


#endif