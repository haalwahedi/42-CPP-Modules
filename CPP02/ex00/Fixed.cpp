/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:34 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/27 13:15:35 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fractional Bits must always be 8
const int Fixed::fractionalBits = 8;

// Initialize raw bits referencing 0
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	Fixed::rawBits = 0;
}

// Destroy just letting you know
Fixed::~Fixed(void) {std::cout << "Destructor called" << std::endl;}

// Copy constructor implements with a call with value (obj)
Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

// Assign value to the operator
Fixed	&Fixed::operator=(Fixed const &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.getRawBits();
	return (*this);
}

// return raw Bits value
int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::rawBits);
}

// assign value to raw Bits
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::rawBits = raw;
}