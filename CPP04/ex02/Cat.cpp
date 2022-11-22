/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:25 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:50:04 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Default constructor Cat called" << std::endl;
	this->c = new Brain();
}

Cat::Cat( Cat const & obj ) : Animal( obj ){
	std::cout << "Copy constructor Cat called" << std::endl;
	this->c = new Brain();
	*this = obj;

}

Cat::~Cat() {
	std::cout << "Default destructor Cat called" << std::endl;
	 delete c;
}

Brain 	*Cat::get_brain() const{
	return (this->c);
}

void	Cat::display_all() const
{
	this->c->ideas_pool();
}

Cat & Cat::operator=( Cat const & obj ) {
	if (this == &obj)
        return (*this);
    this->_type = obj.getType();
    *(this->c) = *(obj.get_brain()); 
	
	std::cout << "Copy assignment Cat operator called" << std::endl;
	return ( *this );
}

void	Cat::makeSound() const {
	std::cout << "Meowwwwwww...Meowwwwwwwwww..." << std::endl;
}

