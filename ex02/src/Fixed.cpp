/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/08 07:50:47 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Fixed.hpp"
/********[DEFAULT CONSTRUCTOR]*******/
Fixed::Fixed( void ){
    // std::cout << "Default Constructor called" << std::endl;
    this->fp = 0;
}

/********[COPY ASSIGNMENT OPERATOR OVERLOAD (=)]*******/
Fixed &Fixed::operator=( Fixed const &obj ){
    // std::cout << "Copy assigment operator called" << obj.toFloat() << std::endl;
    this->fp = obj.fp;
    return *this;
}

/********[DESTRUCTOR]*******/
Fixed::~Fixed( void ){
    // std::cout << "Destructor is called" << std::endl;
}

/********[GET FIXED POINT]*******/
int Fixed::getRawBits( void ) const{
    // std::cout << "getRawBits member function is called" << std::endl;
    return (this->fp);
}

/********[SET FIXED POINT]*******/
void Fixed::setRawBits( int const raw){
    // std::cout << "setRawBits member function is called" << std::endl;
    this->fp = raw;
}

/********[COPY CONSTRUCTOR]*******/
Fixed::Fixed( Fixed const &obj ){
    // std::cout << "Copy Constructor called" << std::endl;
    *this = obj;
}

/********[INT CONSTRUCTOR]*******/
Fixed::Fixed( int const nb ){
    // std::cout << "Int Constructor is called" << std::endl;
    this->fp = nb << this->fb;
}

/********[FLOAT CONSTRUCTOR]*******/
Fixed::Fixed( float const nb ){
    // std::cout << "Float Constructor is called" << std::endl;
    this->fp = roundf(nb * (1 << this->fb));
}

/********[CONVEERTE TO FLOAT]*******/
float Fixed::toFloat( void ) const{
    return ((float)this->fp / (1 << this->fb));
}

/********[CONVEERTE TO int]*******/
int Fixed::toInt( void ) const{
    return (this->fp >> this->fb);
}

/********[INSERT OPERATOR OVERLOAD (<<)]*******/
std::ostream &operator<<( std::ostream &_out, Fixed const &obj ){
    return _out << obj.toFloat();
}

/********[COPERATION OPERATORS OVERLOAD( > | < | >= | <= | == | != )]*******/

bool Fixed::operator>(Fixed const &a){
    return this->fp > a.fp;
}

bool Fixed::operator<(Fixed const &a){
    return this->fp < a.fp;
}

bool Fixed::operator>=(Fixed const &a){
    return this->fp >= a.fp;
}

bool Fixed::operator<=(Fixed const &a){
    return this->fp <= a.fp;
}

bool Fixed::operator==(Fixed const &a){
    return this->fp == a.fp;
}

bool Fixed::operator!=(Fixed const &a){
    return this->fp != a.fp;
}

/********[ARETHMETIC OPERATORS OVERLOAD( + | - | / | *)]*******/

Fixed &Fixed::operator+( Fixed const &a ){
    float n = this->toFloat() + a.toFloat();
    this->fp = roundf(n * (1 << this->fb));
    return *this;
}

Fixed &Fixed::operator*( Fixed const &a ){
    float n = this->toFloat() * a.toFloat();
    this->fp = roundf(n * (1 << this->fb));
    return *this;
}

Fixed &Fixed::operator-( Fixed const &a ){
    float n = this->toFloat() - a.toFloat();
    this->fp = roundf(n * (1 << this->fb));
    return *this;
}

Fixed &Fixed::operator/( Fixed const &a ){
    float n = this->toFloat() / a.toFloat();
    this->fp = roundf(n * (1 << this->fb));
    return *this;
}

/********[INCRIMENTING AND DECREMENTING OPERATOR OVERLOAD (++X | X++ | --X | X--)]*******/

Fixed &Fixed::operator++(void){
    this->fp += 1;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp(*this);
    this->fp += 1;
    return tmp;
}

Fixed &Fixed::operator--(void){
    this->fp -= 1;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    this->fp -= 1;
    return tmp;
}

