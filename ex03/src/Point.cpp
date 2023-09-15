/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/15 02:32:47 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/Point.hpp"
/**********[Default Constructor]***********/
Point::Point( void ){
}

/**********[Destructor]***********/
Point::~Point( void ){
}

/**********[Float Argiments Constructor]***********/
Point::Point( const float x, const float y) : x(x), y(y) {
}

/**********[Copy Asseginment operator overload]***********/
Point &Point::operator=(Point const &point) {
    (void)point;
    return *this;
}

/**********[Copy Constructor]***********/
Point::Point( Point const &point ): x(point.getX()), y(point.getY()) {
}

/**********[Return the fixed attribute X]***********/
Fixed Point::getX() const {
    return this->x;
}

/**********[Return the fixed attribute Y]***********/
Fixed Point::getY() const {
    return this->y;
}
