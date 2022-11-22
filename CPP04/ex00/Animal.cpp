/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:38:52 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 15:32:56 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "animal" ) {
	std::cout << "Default constructor Animal called" << std::endl;
	return ;
}

Animal::Animal( Animal const &obj ) {
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = obj;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Default destructor Animal called" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const &obj ) {
	std::cout << "Copy assignment Animal operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal doesn't make a sound" << std::endl;
	return ;
}

std::string		Animal::getType( void ) const {
	return (this->_type);
}