/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:10 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/15 15:27:32 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

// int	main() {
// 	{

// 		std::cout << "* -> Test 1<-  *" << std::endl;
		
// 		Span	t = Span(5);
// 		t.addNumber(10);
// 		t.addNumber(5);
// 		t.addNumber(15);
// 		t.addNumber(0);
// 		t.addNumber(20);

// 		std::cout << "** Shortest span -> " << t.shortestSpan() << std::endl;
// 		std::cout << "** Longest span -> " << t.longestSpan() << std::endl << std::endl;
// 	}


// 	{
// 		std::cout << "* -> Test 2 <- *" << std::endl;	
// 		Span	t = Span(10000);

// 		std::vector<int>	temp;
// 		for (int i = 1; i <= 10000; i++) {
// 			temp.push_back(i);
// 		}
// 		t.addNumbers(temp.begin(), temp.end());

	
// 		std::cout << "** Shortest span -> " << t.shortestSpan() << std::endl;
// 		std::cout << "** Longest span -> " << t.longestSpan() << std::endl << std::endl;
// 	}


// 	{

// 		std::cout << "* -> Test Error <-  *" << std::endl;

// 		Span	t = Span(1);

// 		try {
// 			t.addNumber(1);
// 			t.addNumber(2); //impossible
// 		}
// 		catch (std::exception &e) {
// 			std::cout << e.what() << std::endl;
// 		}

// 		try {
// 			std::cout << "Shortest span: " << t.shortestSpan() << std::endl;//impossible 
// 			std::cout << "Longest span: " << t.longestSpan() << std::endl; //with exception above this will not raise 
// 		}
// 		catch (std::exception &e) {
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	return (0);
// }