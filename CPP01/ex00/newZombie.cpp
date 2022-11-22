/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:32 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/25 15:04:37 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	NEW Zombie - "new" -> heap
**	Attempts to Allocate and Initialize a Zombie, returning a pointer to itself
**  It creates a zombie, name it, and return it so you can use it outside of the function scope.
*/
Zombie* Zombie::newZombie(std::string name) 
{
    return new Zombie(name);
}
