/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:03:16 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/03 15:28:32 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_value = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v) : value(v << fract_value) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : value(roundf(f * (1 << fract_value))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c) : value(c.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "deconstructer called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &c) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &c)
		this->value = c.getRawBits();
	return (*this);
}
std::ostream& operator<<(std::ostream& stream, const Fixed &f) {
	stream << f.toFloat();
	return (stream);
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return (this->getRawBits() / float(1 << fract_value));
}

int Fixed::toInt() const {
	return (this->getRawBits() / (1 << fract_value));
}
