/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:05:46 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:05:47 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA 
{
	private:
		std::string		_name;
		Weapon			&_weapon;
	public:
		HumanA(std::string name, Weapon &w);
		void	attack(void);
};

#endif