/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:10 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:19:41 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

const char	*NotFoException::what() const throw() {
		return ("Couldn't find.");
}

int	main() {
	std::vector<int> tab;
	std::vector<int>::iterator it_tab;


	std::deque<int> tab2;
	std::deque<int>::iterator it_tab2;

	for (int i = 0; i < 10; i++) {
		tab.push_back(i);
		tab2.push_back(i);
	}

	std::cout << "*-> FOUND <-*" << std::endl;

	it_tab = easyfind(tab, 5);

	it_tab2 = easyfind(tab2, 7);

	std::cout << "** easyfind -> " << *it_tab << std::endl;
	std::cout << "** easyfind -> " << *it_tab2 << std::endl << std::endl;

//-----------------------------------------------------------

	std::cout << "*-> NOT FOUND <-*" << std::endl;

	try
	{
		std::cout << "** easyfind -> ";
		it_tab = easyfind(tab, 100);
		std::cout << *it_tab << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	return (0);
}