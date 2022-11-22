/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:26 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:28:41 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	FragTrap::name = "Frog";
	FragTrap::hitPoints = 100;
	FragTrap::energy= 100;
	FragTrap::attackDamage = 30;
	std::cout << FragTrap::name << ": Default constructor called." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << FragTrap::name << ": Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj): ClapTrap(obj) {
	std::cout << FragTrap::name << ": Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj) {
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

void		FragTrap::attack(const std::string& target) {
	if ((FragTrap::hitPoints > 0) && (FragTrap::energy > 0)) {
		std::cout << FragTrap::name
			<< " Hit " << target << ", dealing "
			<< FragTrap::attackDamage << " points of damage!" << std::endl;
		FragTrap::energy--;
	} else if ((FragTrap::hitPoints > 0) && (FragTrap::energy <= 0)) {
		std::cout << FragTrap::name << " I lost my arms, but still here!" << std::endl;
	} else {
		std::cout << FragTrap::name << " died, logically, can't attack..." << std::endl;
	}
}

void		FragTrap::highFivesGuys(void) {
	std::cout << FragTrap::name << "Shouts:" << std::endl;
	std::cout << "- High Five!!" <<std::endl;
	std::cout << "Standing while keeping his hand up..." << std::endl;
}