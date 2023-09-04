/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:56:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/04 11:55:20 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default Constructor called" << std::endl;
    this->fp = 0;
}

Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy Constructor called" << std::endl;
    if (this != &obj){
        this->fp = obj.fp;
    }
}

Fixed Fixed::operator=(const Fixed obj){
    return obj;
}
