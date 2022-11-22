/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:01 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 15:35:35 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "Wrong Cat";
	std::cout << "Default constructor WrongCat called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & obj ) : WrongAnimal( obj ){
	std::cout << "Copy constructor WrongCat called" << std::endl;
	*this = obj;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default destructor WrongCat called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat const & obj ) {
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	this->_type = obj._type;
	return ( *this );
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Boohoo" << std::endl;
	return ;
}