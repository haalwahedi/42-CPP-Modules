/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:16 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:17 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	this->_type = "Dog";
	std::cout << "Default constructor Dog called" << std::endl;
	return ;
}

Dog::Dog( Dog const & obj ) : Animal( obj ){
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = obj;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Default destructor Dog called" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & obj ) {
	std::cout << "Copy assignment Dog operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof....Woof..." << std::endl;
	return ;
}