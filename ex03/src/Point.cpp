/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 01:09:09 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/Point.hpp"
/**********[Default Constructor]***********/
Point::Point( void ){
    std::cout << "Point : Default constructor called" << std::endl;
}

/**********[Destructor]***********/
Point::~Point( void ){
    std::cout << "Point : Deconstructor called" << std::endl;
}

/**********[Float Argiments Constructor]***********/
Point::Point( const float x, const float y) : x(x), y(y) {
    std::cout << "Point : Float arguments constructor called" << std::endl;
}

/**********[Copy Asseginment operator overload]***********/
Point &Point::operator=(Point const &point) {
    (void)point;
    return *this;
}

/**********[Copy Constructor]***********/
Point::Point( Point const &point ): x(point.getX()), y(point.getY()){
    std::cout << "Point : Copy constructor called" << std::endl;
}

/**********[Return the fixed attribute X]***********/
Fixed const Point::getX() const {
    return this->x;
}

/**********[Return the fixed attribute Y]***********/
Fixed const Point::getY() const {
    return this->y;
}
