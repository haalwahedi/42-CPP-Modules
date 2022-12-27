/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:54:51 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/05 16:54:52 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
T min(T x, T y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

template <typename T> void swap(T &x, T &y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

#endif