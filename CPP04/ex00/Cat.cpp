/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:05 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:06 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->_type = "Cat";
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

Cat::Cat( Cat const & obj ) : Animal( obj ){
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = obj;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor Cat called" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & obj ) {
	std::cout << "Copy assignment Cat operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	Cat::makeSound( void ) const {
	std::cout << "Meowwwwwww...Meowwwwwwwwww..." << std::endl;
	return ;
}