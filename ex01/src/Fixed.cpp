/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/06 04:02:52 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Fixed.hpp"
/********[DEFAULT CONSTRUCTOR]*******/
Fixed::Fixed(void){
    std::cout << "Default Constructor called" << std::endl;
    this->fp = 0;
}

/********[COPY ASSIGNMENT OPERATOR OVERLOAD (=)]*******/
Fixed &Fixed::operator=(Fixed &obj){
    std::cout << "Copy assigment operator called" << std::endl;
    return obj;
}

/********[DESTRUCTOR]*******/
Fixed::~Fixed(void){
    std::cout << "Destructor is called" << std::endl;
}

/********[GET FIXED POINT]*******/
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function is called" << std::endl;
    return this->fp;
}

/********[SET FIXED POINT]*******/
void Fixed::setRawBits( int const raw){
    std::cout << "setRawBits member function is called" << std::endl;
    this->fp = raw;
}

/********[COPY CONSTRUCTOR]*******/
Fixed::Fixed(Fixed &obj){
    std::cout << "Copy Constructor called" << std::endl;
    this->fp = obj.fp;
}

/********[INT CONSTRUCTOR]*******/
Fixed::Fixed( int const nb ){
    std::cout << "Int Constructor is called" << std::endl;
    this->fp = nb << this->fb;
}

/********[FLOAT CONSTRUCTOR]*******/
Fixed::Fixed( float const nb ){
    std::cout << "Float Constructor is called" << std::endl;
}

/********[CONVEERTE TO FLOAT]*******/
float Fixed::toFloat( void ) const{
    return ;
}

/********[CONVEERTE TO int]*******/
int Fixed::toInt( void ) const{
    return this->fp >> this->fb;
}

/********[INSERT OPERATOR OVERLOAD (<<)]*******/
std::ostream &operator<<(std::ostream &out, Fixed &obj){
    return out << obj.toFloat();
}
