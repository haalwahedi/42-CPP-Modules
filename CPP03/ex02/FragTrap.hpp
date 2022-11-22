/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:35 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:28:23 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(FragTrap const &obj);
		FragTrap	&operator=(FragTrap const &obj);
		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif