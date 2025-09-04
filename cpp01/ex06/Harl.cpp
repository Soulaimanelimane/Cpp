/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:24:32 by slimane           #+#    #+#             */
/*   Updated: 2025/08/30 15:27:25 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int valid_levl(std::string level)
{
    int valid = 0;
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
        valid = 1;
    return valid;
}

void Harl::complain(std::string level)
{
    int valid = valid_levl(level);
    if (valid == 0)
    {
        std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    switch (level[0])
    {
        case 'D':
        {
            std::cout << "[DEBUG]" << std::endl;
            this->debug();
            break;
        }
        case 'I':
        {
            std::cout << "[INFO]" << std::endl;
            this->info();
            break;
        }
        case 'W':
        {
            std::cout << "[WARNING]" << std::endl;
            this->warning();
            break;
        }
        case 'E':
        {
            std::cout << "[ERROR]" << std::endl;
            this->error();
            break;
        }
        default:
            std::cout << "WALO AGMANO nothing to say :(";
            break;
            
    }
}

void Harl::debug (void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info (void)
{
    std::cout <<  "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning (void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error (void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}