/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:50 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:06:51 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) 
{
	this->_type = type;
}

Weapon::~Weapon(void) 
{

}

const std::string	&Weapon::getType(void) 
{
	return this->_type;
}

void				Weapon::setType(std::string nType) 
{
	this->_type = nType;
}	