/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:47 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:21:10 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

class Span {
private:
	std::vector<int>	_container;
	unsigned int		_maxN;

public:
	Span();
	Span(unsigned int n);
	Span(const Span &cpy);
	Span &operator=(const Span &cpy);
	~Span();

	const std::vector<int>	&getContainer() const;
	const unsigned int		&getMaxsize() const;

	void					addNumber(int num);
	void					addNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
	unsigned int			shortestSpan() const;
	unsigned int			longestSpan() const;

	class NotFoException : public std::exception {
	public:
		const char	*what() const throw();
	};

	class ChckException : public std::exception {
	public:
		const char	*what() const throw();
	};
};

#endif