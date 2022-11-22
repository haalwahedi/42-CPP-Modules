/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:42:50 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 18:07:48 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

int main ()
{
	int i;
	
	const Animal* j = new Dog();
	const Animal* c = new Cat();
	Animal	*animals[ANMAL_ARR];

	for (i = 0; i < ANMAL_ARR; i++)
	{
		if (i < ANMAL_ARR / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();

		std::cout << std::endl << ".. .. .. .. .. ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
		std::cout <<  "\nArray Animal type: " << \
		animals[i]->getType() << std::endl;
	}
	std::cout << "\nBasic Animal type: " << j->getType() << " "  << std::endl; 
	std::cout << "Basic Animal type: " << c->getType() << " \n" << std::endl; 
		
	
	Cat *cats = new Cat();
	cats->get_brain()->b_ideas[0] = "I like fish..";
	cats->get_brain()->b_ideas[1] = "I don't like oranges";

	std::cout << "\n" << cats->getType() << " thoughts.. ";
	cats->get_brain()->ideas_pool();
	std::cout << "\n";

	Cat *cat_new = new Cat();
	*cat_new = *cats;
	std::cout << "\n" << cat_new->getType() << " copy thoughts.. ";
	cat_new->get_brain()->ideas_pool();
	std::cout << "\n";
	std::cout << std::endl << ".. .. .. .. .. ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;

	for (int i = 0; i < ANMAL_ARR; i++)
		delete animals[i];
	delete j;
	delete c;
	delete cat_new;
	delete cats;
	
    return (0);
}