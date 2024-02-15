/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:20:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 20:10:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_value = 8;

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int v) : value(v << fract_value) {} 

Fixed::Fixed(const float f) : value(roundf(f * (1 << fract_value))) {}

Fixed::Fixed(const Fixed &c) : value(c.getRawBits()) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &c) {
	if (this != &c)
		this->value = c.getRawBits();
	return (*this);
}

bool	Fixed::operator!=(const Fixed &c) const {
	return (this->getRawBits() != c.getRawBits());
}

bool	Fixed::operator==(const Fixed &c) const {
	return (this->getRawBits() == c.getRawBits());
}

bool	Fixed::operator<=(const Fixed &c) const {
	return (this->getRawBits() <= c.getRawBits());
}

bool	Fixed::operator>=(const Fixed &c) const {
	return (this->getRawBits() >= c.getRawBits());
}

bool	Fixed::operator<(const Fixed &c) const {
	return (this->getRawBits() < c.getRawBits());
}

bool	Fixed::operator>(const Fixed &c) const {
	return (this->getRawBits() > c.getRawBits());
}

std::ostream& operator<<(std::ostream& stream, const Fixed &f) {
	stream << f.toFloat();
	return (stream);
}

Fixed	Fixed::operator+(const Fixed &c) const {
	return (this->toFloat() + c.toFloat());
}

Fixed	Fixed::operator-(const Fixed &c) const {
	return (this->toFloat() - c.toFloat());
}

Fixed	Fixed::operator*(const Fixed &c) const {
	return ((this->toFloat() * c.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &c) const {
	return (this->toFloat() / c.toFloat());
}

Fixed& Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return const_cast<Fixed&>(a);
	return const_cast<Fixed&>(b);
}

Fixed& Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return const_cast<Fixed&>(a);
	return const_cast<Fixed&>(b);
}

int Fixed::getRawBits(void) const {
	return (value);
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
