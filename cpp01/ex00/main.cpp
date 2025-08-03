/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:29:40 by slimane           #+#    #+#             */
/*   Updated: 2025/08/03 00:28:54 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void f()
{
    system("leaks Zombie");
}
int main() {
    //atexit(f);
    Zombie *p; 
    p = newZombie("heap");
    p->annouce();
    randomChump("stack");
}