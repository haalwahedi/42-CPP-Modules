/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:39:07 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/22 15:39:08 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
    	Bureaucrat b1;
        std::cout << b1 << std::endl;
        b1.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "-----------------------------------------" << std::endl;
    try
    {
    	Bureaucrat b2("Tester", 1);
        std::cout << b2 << std::endl;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << "-----------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Intern", 151);
        std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------" << std::endl;
}