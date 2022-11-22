/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:16 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 14:51:46 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

//	Default Constructor
ClapTrap::ClapTrap(void):name("Evil Knight"), hitPoints(10), energy(10), attackDamage(0) {
	std::cout << ClapTrap::name << ": Default constructor called" << std::endl;
}

//	Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

//	Copy Cosntructor
ClapTrap::ClapTrap(ClapTrap const &obj) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

//	Object Assign the variables
ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

//	Attack function
void ClapTrap::attack(const std::string& target) 
{
	if ((ClapTrap::hitPoints > 0) && (ClapTrap::energy > 0)) 
	{
		std::cout << ClapTrap::name
			<< " attacks " << target << ", causing "
			<< ClapTrap::attackDamage << " points of damage!"
			<< std::endl;
		ClapTrap::energy--;
	} else if ((ClapTrap::hitPoints > 0) && (ClapTrap::energy <= 0)) 
	{
		std::cout << ClapTrap::name << " has no energy, can't attack..." << std::endl;
	} else 
	{
		std::cout << ClapTrap::name << " is dead already, can't attack..." << std::endl;
	}
}

//	Taking Damage function
void ClapTrap::takeDamage(unsigned int amount) 
{
	if (ClapTrap::hitPoints > 0)
	{
		std::cout << ClapTrap::name
			<< " suffered " << amount
			<< " points of damage!" << std::endl;
		ClapTrap::hitPoints -= amount;
	} else {
		std::cout << "Stop hitting him!!! he's already dead!!" << std::endl;
		ClapTrap::hitPoints -= amount;
	}
}

//	Repair function
void ClapTrap::beRepaired(unsigned int amount) 
{
	if (ClapTrap::energy > 0) 
	{
		std::cout << ClapTrap::name
			<< " recovered " << amount
			<< " points of HP!" << std::endl;
		ClapTrap::hitPoints += amount;
		ClapTrap::energy--;
	} else 
	{
		std::cout << "There is not enough energy to repair him..." << std::endl;
	}
}
