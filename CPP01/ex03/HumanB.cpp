/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:12 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:06:13 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon &w) 
{
	this->_weapon = &w;
}

void		HumanB::attack(void) 
{
	std::cout << this->_name << "attacks with their " << this->_weapon->getType() << std::endl;
}