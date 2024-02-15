/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:14:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/03 15:15:43 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &c) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = c.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "deconstructer called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &c) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &c)
		this->value = c.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}
