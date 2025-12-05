/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:59:09 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 15:30:40 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &_target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};



#endif