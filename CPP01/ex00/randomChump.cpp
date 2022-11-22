/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:39 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/25 15:34:26 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Zombie on the stack...
** At this time there is no need to create a zombie on the heap,
** since this zombie would work during this function only.
** It creates a zombie, name it, and the zombie announces itself.
*/
void	Zombie::randomChump(std::string name)
{
	Zombie chump(name);
	chump.announce();
}
