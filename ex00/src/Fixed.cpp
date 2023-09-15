/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/15 02:56:43 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Fixed.hpp"

/********[DEFAULT CONSTRUCTOR]*******/
Fixed::Fixed( void ){
    std::cout << "Default constructor called" << std::endl;
    this->fp = 0;
}

/********[COPY ASSIGNMENT OPERATOR OVERLOAD (=)]*******/
Fixed &Fixed::operator=( Fixed const &obj ){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fp = obj.getRawBits();
    return *this;
}

/********[DESTRUCTOR]*******/
Fixed::~Fixed( void ){
    std::cout << "Destructor called" << std::endl;
}

/********[GET FIXED POINT]*******/
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp);
}

/********[SET FIXED POINT]*******/
void Fixed::setRawBits( int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fp = raw;
}

/********[COPY CONSTRUCTOR]*******/
Fixed::Fixed( Fixed const &obj ){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
