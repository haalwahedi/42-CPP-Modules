/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:08:19 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/24 15:08:20 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <stdlib.h>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);
		void		announce(void);
		void		setName(std::string name);
		Zombie		*zombieHorde(int N, std::string name);
};

#endif
