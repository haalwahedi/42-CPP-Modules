/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:34 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/03 15:01:59 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

// Initialize rawBits referencing 0
Fixed::Fixed(void) 
{
	Fixed::rawBits = 0;
}

// Destroy
Fixed::~Fixed(void) 
{
	
}

// Copy constructor implements with a call with value (obj)
Fixed::Fixed(const Fixed &obj) 
{
	*this = obj;
}

Fixed::Fixed(const int fixedPointValue) 
{
	Fixed::rawBits = fixedPointValue << Fixed::fractionalBits;
}

Fixed::Fixed(const float floatPointValue) 
{
	Fixed::rawBits = roundf(floatPointValue  * (1 << Fixed::fractionalBits));
}

// Assign value to the operator
Fixed	&Fixed::operator=(Fixed const &obj) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.rawBits;
	return (*this);
}

Fixed	&Fixed::min(Fixed &x, Fixed &y) 
{
	return(x < y ? x : y);
}

Fixed	const &Fixed::min(Fixed const &x, Fixed const &y) 
{
	return(x < y ? x : y);
}

Fixed	&Fixed::max(Fixed &x, Fixed &y) 
{
	return(x > y ? x : y);
}
Fixed	const &Fixed::max(Fixed const &x, Fixed const &y) 
{
	return(x > y ? x : y);
}

Fixed	Fixed::operator++(void) 
{
	Fixed	fixed;
	fixed.rawBits = ++rawBits;
	return (fixed);
}

Fixed	Fixed::operator--(void) 
{
	Fixed	fixed;
	fixed.rawBits = --rawBits;
	return (fixed);
}

Fixed	Fixed::operator++(int) 
{
	Fixed	fixed;
	fixed.rawBits = rawBits++;
	return (fixed);
}

Fixed	Fixed::operator--(int) 
{
	Fixed	fixed;
	fixed.rawBits = rawBits--;
	return (fixed);
}

int		Fixed::getRawBits(void) const 
{
	return (Fixed::rawBits);
}

float	Fixed::toFloat(void) const 
{
	return ((float)Fixed::rawBits / (1 << Fixed::fractionalBits));
}

int		Fixed::toInt(void) const 
{
	return (Fixed::rawBits / (1 << Fixed::fractionalBits));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) 
{
	os << obj.toFloat();
	return (os);
}

bool	operator>(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() > obj.getRawBits());
}

bool	operator<(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() < obj.getRawBits());
}

bool	operator>=(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() >= obj.getRawBits());
}

bool	operator<=(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() <= obj.getRawBits());
}

bool	operator==(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() == obj.getRawBits());
}

bool	operator!=(Fixed const &num, Fixed const &obj) 
{
	return (num.getRawBits() != obj.getRawBits());
}

Fixed	operator+(Fixed const &num, Fixed const &obj) 
{
	return (Fixed(num.toFloat() + obj.toFloat()));
}

Fixed	operator-(Fixed const &num, Fixed const &obj) 
{
	return (Fixed(num.toFloat() - obj.toFloat()));
}

Fixed	operator*(Fixed const &num, Fixed const &obj) 
{
	return (Fixed(num.toFloat() * obj.toFloat()));
}

Fixed	operator/(Fixed const &num, Fixed const &obj) 
{
	return (Fixed(num.toFloat() / obj.toFloat()));
}