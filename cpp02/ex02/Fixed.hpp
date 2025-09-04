/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:16:44 by slimane           #+#    #+#             */
/*   Updated: 2025/09/05 00:08:52 by slimane          ###   ########.fr       */
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

        bool operator < (const Fixed  &obj) const ;
        bool operator <= (const Fixed  &obj);
        bool operator > (const Fixed  &obj) const ;
        bool operator >= (const Fixed  &obj);
        bool operator == (const Fixed  &obj);
        bool operator != (const Fixed  &obj);

        Fixed operator + (const Fixed  &obj)const ;
        Fixed operator - (const Fixed  &obj)const ;
        Fixed operator * (const Fixed  &obj)const ;
        Fixed operator / (const Fixed  &obj)const ;

        Fixed &operator ++ (void);
        Fixed operator ++ (int);
        Fixed &operator -- (void);
        Fixed operator -- (int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};
    std::ostream& operator<<(std::ostream &out, const Fixed &obj);
#endif 