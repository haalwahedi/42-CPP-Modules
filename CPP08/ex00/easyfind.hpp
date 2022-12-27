/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:13 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:19:10 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

class NotFoException : public std::exception {
public:
	const char	*what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &container, int num) {

	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw NotFoException();
	return (it);
}

#endif