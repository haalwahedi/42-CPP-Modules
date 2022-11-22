/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:13 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 18:02:57 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type( "animal" ) {
	std::cout << "Default constructor Animal called" << std::endl;
	return ;
}

Animal::Animal( Animal const &obj ) {
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = obj;
	return ;
}

Animal::~Animal() {
	std::cout << "Default destructor Animal called" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const &obj ) {
	std::cout << "Copy assignment Animal operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	Animal::makeSound() const {
	std::cout << "Animal doesn't make a sound" << std::endl;
	return ;
}

std::string		Animal::getType() const {
	return (this->_type);
}

// Brain	*Animal::get_brain() const {
// 	return (this->g);
// }