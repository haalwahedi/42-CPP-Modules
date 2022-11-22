/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:40:45 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 14:29:12 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		void	randomChump(std::string name);
		Zombie	*newZombie(std::string name);		
};

#endif