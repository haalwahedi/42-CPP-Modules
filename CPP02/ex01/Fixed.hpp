/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:37 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/03 15:01:18 by halwahed         ###   ########.fr       */
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
};

/*	An overload of the insertion («) operator that inserts a floating-point representation
**	of the fixed-point number into the output stream object passed as parameter.
*/
std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

#endif