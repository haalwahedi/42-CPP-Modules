/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:51 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 15:33:50 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & obj ) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = obj;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default destructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & obj ) {
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal doesn't make a sound" << std::endl;
	return ;
}

std::string		WrongAnimal::getType( void ) const {
	return (this->_type);
}