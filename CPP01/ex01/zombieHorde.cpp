/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:08:39 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:08:40 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name) 
{
	Zombie	*horde;
	int		i = 0;

	horde = new Zombie[N];
	while (i < N) 
    {
		horde[i].setName(name);
		i++;
	}
	return (horde);
}