/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:26:29 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 18:31:36 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(const float p_x, const float p_y): x(p_x), y(p_y) {};

Point::Point(Point const &c) : x(c.x), y(c.y) {}

Fixed& Point::get_x() const {
	return const_cast<Fixed&>(this->x);
}
Fixed& Point::get_y() const {
	return const_cast<Fixed&>(this->y);
}

Point& Point::operator=(Point &c) {
	if (&c != this)
	{
		const_cast<Fixed&>(x) = c.x;
		const_cast<Fixed&>(y) = c.y;
	}
	return (*this);
}

Point::~Point() {}
