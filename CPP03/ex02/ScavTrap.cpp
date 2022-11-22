/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:44 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:27:44 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	ScavTrap::name = "Stupid";
	ScavTrap::hitPoints = 100;
	ScavTrap::energy = 50;
	ScavTrap::attackDamage = 20;
	std::cout << ScavTrap::name << ": Default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << ScavTrap::name << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj): ClapTrap(obj) {
	std::cout << ScavTrap::name << ": Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj) {
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

void		ScavTrap::attack(const std::string& target) {
	if ((ScavTrap::hitPoints > 0) && (ScavTrap::energy > 0)) {
		std::cout << ScavTrap::name
			<< " Hit " << target << ", dealing "
			<< ScavTrap::attackDamage << " points of damage!" << std::endl;
		ScavTrap::energy--;
	} else if ((ScavTrap::hitPoints > 0) && (ScavTrap::energy <= 0)) {
		std::cout << ScavTrap::name << " I lost my arms, but still here!" << std::endl;
	} else {
		std::cout << ScavTrap::name << " died, logically, can't attack..." << std::endl;
	}
}

void		ScavTrap::guardGate(void) {
	std::cout << ScavTrap::name << " Shouts:" << std::endl;
	std::cout << "- YOUU shall not ... PASSSS!!!!" <<std::endl;
	std::cout << "Assuming the Gate keeper Stance." << std::endl;
}