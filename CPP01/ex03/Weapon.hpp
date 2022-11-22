/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:07:17 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:07:18 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon 
{
	private:
		std::string		_type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string nType);	
};

#endif