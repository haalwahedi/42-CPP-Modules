/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:34 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/03 15:01:11 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;


Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	Fixed::rawBits = 0;
}


Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &obj) 
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

// fixed int point constructor called
Fixed::Fixed(const int fixedPointValue) 
{
	std::cout << "Int constructor called" << std::endl;
	Fixed::rawBits = fixedPointValue << Fixed::fractionalBits;
}

//	float point constructor called
Fixed::Fixed(const float floatPointValue) 
{
	std::cout << "Float constructor called" << std::endl;
	Fixed::rawBits = roundf(floatPointValue  * (1 << Fixed::fractionalBits));
}


Fixed	&Fixed::operator=(Fixed const &obj) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.rawBits;
	return (*this);
}

// The converters for float and for int.
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