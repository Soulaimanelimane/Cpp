/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:16:40 by slimane           #+#    #+#             */
/*   Updated: 2025/09/03 21:38:57 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

 

Fixed::Fixed(const Fixed &obj)
{
    fixed_point = obj.fixed_point;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(Fixed& obj)
{
    this->fixed_point = obj.fixed_point;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits( void )  const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}
void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

Fixed::~Fixed (void)
{
    std::cout << "Destructor called" << std::endl;
}