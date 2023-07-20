/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 03:02:41 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/20 05:54:58 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include"Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->f_p = 0;
}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->f_p);
}

void Fixed::setRawBits(int const raw){
    this->f_p = raw;
}

Fixed &Fixed::operator=(const Fixed &fix){
    std::cout << "Assignation operator called" << std::endl;
    this->f_p = fix.getRawBits();
    return (*this);
}
