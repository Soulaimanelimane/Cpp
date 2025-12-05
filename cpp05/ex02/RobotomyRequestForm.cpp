/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:53:50 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 15:25:13 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm("Robot", 72, 45) ,  target("void")
{
    std::cout << "the Default Constructor Called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target) :AForm("Robot", 72, 45) ,  target(_target)
{
    std::cout << "the Parametrize Constructor Called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm   &obj) : AForm(obj), target(obj.target)
{
    std::cout << "the Copy Constructor Called from RobotomyRequestForm" << std::endl;
            
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this == &obj)
        return *this;
    (AForm::operator=(obj));
    this->target = obj.target;
    std::cout << "the Copy assignment operator Called from RobotomyRequestForm" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSignd())
        throw AForm::NotSigned();
    if (execute.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    
    std::cout << "BRRRRRR....TZZZZZ...KRKJ...KRKJ " ;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "."
        sleep(1);
    }
    time_t t = time(NULL);
    if (t % 2 == 0)
        std::cout << "the " + target + " have been robotomized successfully :}" << std::endl;
    else
        std::cout << "the " + target + " failed to be robotomized :(" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor Called From RobotomyRequestForm" << std::endl;
}