/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:51:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 18:41:24 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<cmath>

class Fixed {
    private:
        int fp;
        static const int fb = 8;
    public:
        Fixed( void ); // Defaulte
        Fixed( Fixed const &obj ); // Copy constructor
        Fixed &operator=( Fixed const &obj ); // Copy assignemnt ooperator
        Fixed( int const nb ); // int constructor
        Fixed( float const nb ); // float constructor
        ~Fixed( void ); // destructor
        int getRawBits ( void ) const; // return the fixed point
        void setRawBits( int const raw ); // edit the fixed point
        int toInt( void ) const; // convert the fixed point to intger
        float toFloat( void ) const; // convert the fixed point to floating point
        bool operator>( Fixed const &a ) const; // overloading greater than operator (>)
        bool operator<( Fixed const &a ) const; // overloading less than operator (>)
        bool operator>=( Fixed const &a ) const; // overloading greater than or equale operator (>=)
        bool operator<=( Fixed const &a ) const; // overloading less than or equale operator (>=)
        bool operator==( Fixed const &a ) const; // overloading equale operator (==)
        bool operator!=( Fixed const &a ) const; // overloading equale operator (==)
        Fixed &operator+( Fixed const &a ); // overloading plus operator (+)
        Fixed &operator-( Fixed const &a ); // overloading minus operator (-)
        Fixed &operator*( Fixed const &a ); // overloading multiplication operator (*)
        Fixed &operator/( Fixed const &a ); // overloading division operator (/)
        Fixed &operator++(void); // overloading pre-increment operator (++x)
        Fixed operator++(int); // overloading post-increment operator (x++)
        Fixed &operator--(void); // overloading pre-increment operator (++x)
        Fixed operator--(int); // overloading post-increment operator (x++)
        static Fixed &min(Fixed &obj1, Fixed &obj2);
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static Fixed const &min(Fixed const &obj1, Fixed const &obj2);
        static Fixed const &max(Fixed const &obj1, Fixed const &obj2);
};

std::ostream &operator<<( std::ostream &_out, Fixed const &obj );
