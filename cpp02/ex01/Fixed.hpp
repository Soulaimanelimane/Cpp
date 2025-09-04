/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:16:44 by slimane           #+#    #+#             */
/*   Updated: 2025/09/04 14:56:43 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>

class Fixed {
    private :
        int fixed_point;
        static const int fract_part = 8;
    public :
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();

        Fixed& operator = ( Fixed const  &obj);
        float toFloat( void ) const;
        int toInt( void ) const; 
        int getRawBits( void ) const;
        void setRawBits( int const raw );    
};
    std::ostream& operator<<(std::ostream &out, const Fixed &obj);
#endif 