/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:36 by slimane           #+#    #+#             */
/*   Updated: 2025/09/15 22:44:18 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string  str;
	PhoneBook phone;
	int index = 0;
	phone.set_index(index);
	// std::cout << "enter a command [ADD || SEARCH || EXIT ] : ";
	while (str != "EXIT")
	{
		std::cout << "enter a command [ADD || SEARCH || EXIT ] : ";
		std::getline(std::cin , str);
		if (std::cin.eof())
			return (1);
		if (str == "ADD")
		{
			std::string num , f_name, l_name, nick, secret;
			std::cout << "enter number of phone : " ;
			std::getline(std::cin , num);
			if (std::cin.eof())
				return (1);
			std::cout << "enter first name : ";
			std::getline(std::cin , f_name);
			if (std::cin.eof())
				return (1);			
			std::cout << "enter last name : ";
			std::getline(std::cin , l_name);
			if (std::cin.eof())
				return (1);	
			std::cout << "enter nickname : ";
			std::getline(std::cin , nick);
			if (std::cin.eof())
				return (1);	
			std::cout << "enter darkest secret : ";
			std::getline(std::cin , secret);
			if (std::cin.eof())
				return (1);	
			if (num.empty() || f_name.empty() || l_name.empty() || nick.empty() || secret.empty())
			{
				std::cerr << "plz one of the elemet is empty make sure all the elements are full" << std::endl;
				continue;
			}
			phone.ADD(num, index, f_name, l_name, nick, secret);
			index++;
			phone.set_index(index);
		}
		else if (str == "SEARCH")
		{
			phone.print_contacts(index);
			std::string  tofind;
			std::cout << "search : ";
			std::getline(std::cin , tofind);
			if (std::cin.eof())
				return (1);
			phone.find_contact(index , tofind);
		}
		else if (str == "EXIT")
			return (0);
		
	}
	
}