/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:55:07 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/05 16:55:08 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "Int array" << std::endl;
	int a[5] = {1, 2, 3, 4, 5};
	iter(a, 5, ft_print);
	std::cout << std::endl;

	std::cout << "Char array" << std::endl;
	char b[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(b, 5, ft_print);
	std::cout << std::endl;

	std::cout << "Double array" << std::endl;
	double c[5] = {1.5, 2.6, 3.888, 4.12, 5.0};
	::iter(c, 5, ft_print);

	return (0);
}
