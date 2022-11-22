/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:42 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 14:34:16 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name) 
{
	this->_name = name;
}

Zombie::~Zombie(void) 
{
	std::cout << this->_name << ": died!" << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << this-> _name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}