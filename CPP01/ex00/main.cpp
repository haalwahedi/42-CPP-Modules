/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:24:01 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/18 15:24:02 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) 
{
	/*A zombie allocated and initialized*/
	Zombie	*zombie = new Zombie("Z1");
	zombie->announce();
    /* When creating a new zombie, allocate and initialize the zombie */
	Zombie	*anotherZombie = zombie->newZombie("Z2");
	anotherZombie->announce();
	/* when using this function, the zombie is processed inside this function
    **Z3 will die instantly after finishing the role;	
	*/
	anotherZombie->randomChump("Z3");
	/*delete - free allocated memory*/
	delete zombie;
	delete anotherZombie;
	return (0);
}