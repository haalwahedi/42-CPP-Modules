/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:18:07 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:23:13 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T> {
public:
	MutantStack() {}

	MutantStack(const MutantStack &cpy) { *this = cpy; }
	MutantStack &operator=(const MutantStack &cpy) {
		if (this != &cpy)
			std::stack<T>::opertator=(cpy);
		return (*this);
	}

	~MutantStack() {}
	
	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
	
};

#endif