/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:36 by slimane           #+#    #+#             */
/*   Updated: 2025/10/07 17:37:57 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int only_spaces(std::string str)
{
	for(size_t i = 0; str.length() > i ; i++){
		if (str[i] != ' ' || str[i] != '\t')
			return 0;
	}
	return 1;
}

int main()
{
	std::string  str;
	PhoneBook phone;
	int index = 0;
	while (str != "EXIT")
	{
		std::cout << "enter a command [ADD || SEARCH || EXIT ] : ";
		std::getline(std::cin , str);
		if (std::cin.eof())
			return (1);
		if (str == "ADD")
		{
			std::string num , first, last, nick, secret;
			std::cout << "enter number of phone : " ;
			std::getline(std::cin , num);
			if (std::cin.eof())
				return (1);
			std::cout << "enter first name : ";
			std::getline(std::cin , first);
			if (std::cin.eof())
				return (1);			
			std::cout << "enter last name : ";
			std::getline(std::cin , last);
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
			if ((num.empty() || only_spaces(num) || !ft_isprint(num) || is_not_num(num)) || (first.empty() || only_spaces(first) || !ft_isprint(first)) || (last.empty()
				|| only_spaces(last) || !ft_isprint(last)) || (nick.empty() || only_spaces(nick) || !ft_isprint(nick)) || (secret.empty() || only_spaces(secret) || !ft_isprint(secret)))
			{
				std::cerr << "plz one of the elemet is empty make sure all the elements are full and valid " << std::endl;
				continue;
			}
			phone.ADD(num, index, first, last, nick, secret);
			index++;
		}
		else if (str == "SEARCH")
		{
			if (index == 0)
			{
				std::cout << "the contact is empty plz run the command ADD to add contact" << std::endl;
				continue;
			}
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