/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:50:31 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/08 14:50:38 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	invArg(void) {
	std::cout << "Please, use the following syntax: \"./convert <argument>\"" << std::endl;
}

int		main(int ac, char **av) {
	Convert		convert;
	
	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		invArg();
		return (1);
	} else {
		convert.conversor(av[1]);
	}
	return (0);
}