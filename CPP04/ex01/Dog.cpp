/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:55 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:34:51 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Default constructor Dog called" << std::endl;
	this->d = new Brain();
}

Dog::Dog( Dog const & obj ) : Animal( obj ){
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Default destructor Dog called" << std::endl;
	delete d;
}

Dog & Dog::operator=( Dog const & obj ) {
	if (this == &obj)
        return (*this);
    this->_type = obj.getType();
    *(this->d) = *(obj.get_brain());
	std::cout << "Copy assignment Dog operator called" << std::endl;
	return ( *this );
}

void	Dog::makeSound() const {
	std::cout << "Woof....Woof..." << std::endl;
}

Brain	*Dog::get_brain( ) const
{
	return (this->d);
}

void	Dog::display_all() const
{
	this->d->ideas_pool();
}