/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/05 10:18:14 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default Constructor called" << std::endl;
    this->fp = 0;
}

Fixed &Fixed::operator=(Fixed &obj){
    std::cout << "Copy assigment operator called" << std::endl;
    return obj;
}

Fixed::~Fixed(void){
    std::cout << "Destructor is called" << std::endl;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function i called is called" << std::endl;
    return this->fp;
}

void Fixed::setRawBits( int const raw){
    std::cout << "setRawBits member function i called is called" << std::endl;
    this->fp = raw;
}

Fixed::Fixed(Fixed &obj){
    std::cout << "Copy Constructor called" << std::endl;
    this->fp = obj.fp;
}
