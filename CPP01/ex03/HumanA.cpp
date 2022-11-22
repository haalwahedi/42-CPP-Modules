/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:05:34 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:05:35 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*	Class reference attribute initialization.
**	https://en.cppreference.com/w/cpp/language/constructor
*/
HumanA::HumanA(std::string name, Weapon &w):_weapon(w) 
{
    this->_name = name;
}

void		HumanA::attack(void) 
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}