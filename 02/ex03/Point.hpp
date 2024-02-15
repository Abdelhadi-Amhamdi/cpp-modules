/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:46 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 16:43:15 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point
{
	const Fixed x;
	const Fixed y;
	public:
		Point();
		Point(float const p_x, float const p_y);
		Point(Point const &c);
		Point& operator=(Point &c);
		Fixed& get_x() const;
		Fixed& get_y() const;
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif