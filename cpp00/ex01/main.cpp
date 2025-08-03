/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:36 by slimane           #+#    #+#             */
/*   Updated: 2025/08/02 10:32:42 by slimane          ###   ########.fr       */
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
		if (!(std::cin  >>  str))
			break;
		if (str == "ADD")
		{
			int num;
			std::string f_name, l_name, nick, secret;
			std::cout << "enter the num | first name | last name | nickname | darkest secret ";
			std::cin >> num >> f_name >> l_name >> nick >> secret ;
			phone.ADD(num, index, f_name, l_name, nick, secret);
			index++;
			phone.set_index(index);
			phone.print_contacts();
		}
		else if (str == "SEARCH")
		{
			std::string name;
			std::cout << "search : ";
			std::cin >> name;
			phone.find_contact(name);
		}
			
	}
	
}