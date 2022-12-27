/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:41 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:21:24 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _container(0, 0), _maxN(0) {}

Span::Span(unsigned int n) : _container(0, 0), _maxN(n) {}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span &Span::operator=(const Span &cpy) {
	_container = cpy.getContainer();
	_maxN = cpy.getMaxsize();
	return (*this);
}

Span::~Span() {}

const std::vector<int>	&Span::getContainer() const {
	return (_container);
}

const unsigned int	&Span::getMaxsize() const {
	return (_maxN);
}

void	Span::addNumber(int num) {
	if (_container.size() == _maxN)
		throw	ChckException();
	_container.push_back(num);
}

void	Span::addNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
	for (std::vector<int>::iterator it = begin; it != end; it++) {
		if (_container.size() == _maxN)
			throw	ChckException();
		_container.push_back(*it);
	}
}

unsigned int	Span::shortestSpan() const {
	if (_container.size() < 2)
		throw NotFoException();
	
	int							res = INT_MAX;
	std::vector<int>			temp = _container;
	std::vector<int>::iterator	it = temp.begin();

	std::sort(temp.begin(), temp.end());
	while (it != temp.end() - 1) {
		res = std::min(res, *(it + 1) - *it);
		it++;
	}
	return (res);
}

unsigned int	Span::longestSpan() const {
	if (_container.size() < 2)
		throw NotFoException();

	std::vector<int>	temp = _container;
	int					res;

	std::sort(temp.begin(), temp.end());
	res = temp.back() - temp.front();
	return (res);
}

const char	*Span::NotFoException::what() const throw() {
	return ("No span.");
}

const char	*Span::ChckException::what() const throw() {
	return ("Container full.");
}