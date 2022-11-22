/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:08 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/16 18:40:31 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"


void    *story(ClapTrap *ClapTrap)
{
    std::cout << "The Battle between the Good and Evil Knights is such a Classic" << std::endl;
    std::cout << "The Good Knight arrived at the battlefiled alone " << std::endl;
    std::cout << "While The Evil knight was hiding behind the bushes" << std::endl;
    std::cout << "The Evil knight threw a stone at The Good Knight, aiming at his head" << std::endl;
	ClapTrap->attack("The Good Knight");
	std::cout << std::endl;
	std::cout << "The Good Knight, basicslly said good night at that point and passed out" << std::endl;
	ClapTrap->takeDamage(5);
	std::cout << std::endl;
	std::cout << "The Evil Knight danced to his quick victory" << std::endl;
    std::cout << "Little did he know that the Good Knight was acting, to heal and wait for his backup" << std::endl;
	ClapTrap->beRepaired(3);
	std::cout << std::endl;
    std::cout << "The Evil Knight had the whole field monitored, and immediately saw strangers approaching " << std::endl;
    std::cout << "Furious enough The Evil Knight threw stones at them " << std::endl;
    ClapTrap->attack("Peek");
	ClapTrap->attack("AA");
	ClapTrap->attack("Boo");
	std::cout << std::endl;
	std::cout << "but he didn't aim properly, so they dodged the attack and caught him by surprise" << std::endl;
	ClapTrap->takeDamage(1);
	ClapTrap->takeDamage(3);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(3);
	std::cout << std::endl;
	std::cout << "aaaand, that is it.. the Evil Knight died and this is the end of the story\n" << std::endl;
    return (ClapTrap);
}

//Error Handeling
void    error(void)
{
    std::cout << "Error, to play the story use the following syntax \n" << std::endl;
    std::cout << "\"./ClapTrap Story\"" << std::endl;
}


//	AAAAAnd Open....
int		main(int ac, char **av) 
{
	ClapTrap	ClapTrap;
    std::string list[1] = {"Story"};
    int         i = 0;

    if (ac != 2)
    {
        std::cout << "Error, to play the story use the following syntax \n" << std::endl;
        std::cout << "\"./ClapTrap Story\"" << std::endl;
        return (1);
    }
    while (i < 3 && list[i] != av[1]) i++;
    if (i > 3)
    {
        error();
        return (1);
    }
    switch (i)
    {
        case 0:
            story(&ClapTrap);
            return (0);
        default:
            error();
            return (1);
    }
    return (0);
}