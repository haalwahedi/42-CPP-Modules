/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:08:08 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:08:09 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
    this->_name = "";
}

Zombie::~Zombie(void) 
{
	if (!this->_name.empty())
		std::cout << this->_name << ": died!" << std::endl;
}

void		Zombie::announce(void) 
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string name) 
{
    this->_name = name;
}
