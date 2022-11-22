/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:51 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:26:25 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &obj);
		ScavTrap	&operator=(ScavTrap const &obj);
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif