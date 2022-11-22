/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:08 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:30:09 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap c;
    ScavTrap S;
    FragTrap f;
    std::cout << "----------------------------------------------------------------------------------\n";
    c.attack("b");
    c.takeDamage(2);
    c.beRepaired(2);
    c.attack("b");
    f.takeDamage(2);
    f.beRepaired(2);
    f.takeDamage(2);
    f.beRepaired(2);
    f.attack("A");
    c.takeDamage(2);
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(2);
    c.attack("b");
    c.takeDamage(2);
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(2);
    c.takeDamage(2);
    c.beRepaired(2);
    c.highFivesGuys();
    std::cout << "----------------------------------------------------------------------------------\n";

    return (0);
}