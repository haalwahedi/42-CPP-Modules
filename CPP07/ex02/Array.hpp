/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:55:54 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/05 16:55:55 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>


template <class T>
class Array
{
	private:
		T				*a;
		unsigned int	n;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &cpy);
		Array &operator=(Array const &rhs);
		~Array();

		T& operator[](int i) const;

		class invalidIndex: public std::exception
        {
            public :
                const char *what() const throw();
        };
};

#include "Array.tpp"

#endif