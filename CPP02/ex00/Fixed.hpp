/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:37 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/03 15:00:39 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed 
{
	private:
		int					rawBits;
		static const int	fractionalBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif

