/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:07:15 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/25 16:19:14 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* POINTER VS REFERENCE
** Where the pointer carries an address and a reference to its value.
*/
int		main(void) {
	std::string		str = "HI THIS IS BRAIN!";
	std::string		*strPTR = &str;
	std::string		&strREF = str;
	
	std::cout << "The memory address for str is: " << &str << std::endl;
	std::cout << "The memory address for strPTR is: " << strPTR << std::endl;
	std::cout << "The memory address for strREF is: " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the str var: " << str << std::endl;
	std::cout << "The value of the strPTR var: " << *strPTR << std::endl;
	std::cout << "The value of the strREF var: " << strREF << std::endl;
	return (0);
}