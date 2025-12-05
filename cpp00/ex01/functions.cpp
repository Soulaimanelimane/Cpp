/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:24 by slimane           #+#    #+#             */
/*   Updated: 2025/12/04 19:43:54 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_contact(std::string n, int i, std::string first, std::string last, std::string nick, std::string secret)
{
    num = n;
    index = i % 8;
    first_name = first;
    last_name = last;
    nickname = nick;
    darkest_secret = secret;
}

void PhoneBook::ADD(std::string n, int i, std::string first, std::string last, std::string nick, std::string secret)
{
    arr[i % 8].set_contact(n, i, first, last, nick, secret);
}

int Contact::get_index()
{
    return (index);
}

std::string Contact::get_name(int flag)
{
    if (flag == 1)
        return (first_name);
    else if (flag == 2)
        return (last_name);
    else if (flag == 3)
        return (nickname);
    return ("");
}
std::string miniminise(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}

void PhoneBook::print_contacts(int in)
{

    int i = 0;

    if (in >= 8)
        in = 8;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i < in)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << miniminise(arr[i].get_name(1)) << "|" << std::setw(10) << miniminise(arr[i].get_name(2)) << "|" << std::setw(10) << miniminise(arr[i].get_name(3)) << "|" << std::endl;
        i++;
    }
}


int ft_isprint(std::string find) {
    int i = 0;
    while (find[i])
    {
        if (isprint(find[i]) == 0)
            return 0;
        i++;
    }
    return 1;
}

int is_not_num(std::string str) {
    
    for (size_t i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) != 1)
        {
            std::cerr << "the number  should contain just numbers" << std::endl;
            return 1;
        }
    }
    return 0;
}

int ft_atoi(std::string str){
    int res  = 0;
    int i = 0;
    while (str[i])
    {
        res = (res * 10) + (str[i] - '0');
        if (res > 8)
            return (10);
        i++;
    }
    return res;
}

void PhoneBook::find_contact(int index , std::string find){
    
    int i = 0;
    if (index >= 8)
        index = 8;
    if (find == "\0" || !ft_isprint(find) || is_not_num(find))
       exit(1);
    int tofind = ft_atoi(find);
    while (i < index)
    {
        if ((arr[i].get_index() + 1) == tofind)
        {
            std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
            std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << miniminise(arr[i].get_name(1)) << "|" << std::setw(10) << miniminise(arr[i].get_name(2)) << "|" << std::setw(10) << miniminise(arr[i].get_name(3)) << "|" << std::endl;
            return ;
        }
        i++;
    }
    std::cout <<  "Not found :( " << std::endl;
}