/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:42:50 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 15:36:49 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
		const Animal* ani = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		const WrongAnimal* w = new WrongCat();


		std::cout << "\n------------------------------\n" << std::endl;


		std::cout << "The Dog is a " << dog->getType() << "*" << std::endl;
		std::cout << "The Cat is a " << cat->getType() << "*" << std::endl;
		std::cout << "The animal is " << ani->getType() << "*" << std::endl;
		std::cout << "The animal is " << w->getType() << "*" << std::endl;


		cat->makeSound();
		dog->makeSound();
		ani->makeSound();
	
	
		std::cout << "\n------------------------------\n" << std::endl;

		delete ani;
		delete cat;
		delete dog;
		delete w;
	
}