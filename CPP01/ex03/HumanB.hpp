/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:24 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:06:25 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
	private:
		std::string		_name;
		Weapon			*_weapon;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &w);
};

#endif