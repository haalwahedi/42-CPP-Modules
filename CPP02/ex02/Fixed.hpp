/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:37 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/03 15:02:20 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed 
{
	private:
		int					rawBits;
		static const int	fractionalBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int fixedPointValue);
		Fixed(const float floatPointValue);
		Fixed &operator=(Fixed const &obj);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		static Fixed &min(Fixed &x, Fixed &y);
		static const Fixed &min(Fixed const &x, Fixed const &y);
		static Fixed &max(Fixed &x, Fixed &y);
		static const Fixed &max(Fixed const &x, Fixed const &y);
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &obj);


bool	operator>(Fixed const &num, Fixed const &obj);
bool	operator<(Fixed const &num, Fixed const &obj);
bool	operator>=(Fixed const &num, Fixed const &obj);
bool	operator<=(Fixed const &num, Fixed const &obj);
bool	operator==(Fixed const &num, Fixed const &obj);
bool	operator!=(Fixed const &num, Fixed const &obj);

Fixed	operator+(Fixed const &num, Fixed const &obj);
Fixed	operator-(Fixed const &num, Fixed const &obj);
Fixed	operator*(Fixed const &num, Fixed const &obj);
Fixed	operator/(Fixed const &num, Fixed const &obj);

#endif