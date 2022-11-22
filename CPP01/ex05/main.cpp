/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:28:18 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/25 13:28:19 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int ac, char **av) {
	Harl		Harl;
	int			i = 0;
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments. \n" \
		<< "Please, use the following syntax: \"./Harl <complain>\" \n" \
		<< "List of complains: DEBUG, INFO, WARNING and ERROR." << std::endl;
		return (1);
	} else if (ac == 2) {
		while (i < 4 && list[i].c_str() != av[1]) {
			if (list[i] == av[1]) {
				Harl.complain(av[1]);
				return (0);
			}
			i++;
		}
	}
	std::cout << "ERROR - Following Complain was not found. \n" \
	<< "Please, use: DEBUG, INFO, WARNING or ERROR." << std::endl;
	return (1);
}