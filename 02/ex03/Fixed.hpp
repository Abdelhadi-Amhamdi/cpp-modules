/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:03:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 20:09:56 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &c);
		Fixed(const int v);
		Fixed(const float v);
		~Fixed();
		Fixed &	operator= (const Fixed &c);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator> (const Fixed &c) const;
		bool	operator< (const Fixed &c) const;
		bool	operator>= (const Fixed &c) const;
		bool	operator<= (const Fixed &c) const;
		bool	operator== (const Fixed &c) const;
		bool	operator!= (const Fixed &c) const;
		Fixed	operator+ (const Fixed &c) const;
		Fixed	operator- (const Fixed &c) const;
		Fixed	operator* (const Fixed &c) const;
		Fixed	operator/ (const Fixed &c) const;
		Fixed &	operator++();
		Fixed &	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&	max(const Fixed &a, const Fixed &b);
		
	private:
		static const int fract_value;
		int value;
};

std::ostream& operator<<(std::ostream& stream, const Fixed &f);

#endif
