/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:37:45 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:14:46 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string	name;
		int			hitPoints;
		int			energy;
		int			attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string	name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &obj);
		ClapTrap	&operator=(ClapTrap const &obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif