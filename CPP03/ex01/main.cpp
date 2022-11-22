/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:08 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/17 15:03:23 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap C;
    ScavTrap S;
    std::cout << "----------------------------------------------------------------------------------\n";
    C.attack("b");
    C.takeDamage(2);
    C.beRepaired(2);
    C.attack("b");
    S.takeDamage(2);
    S.beRepaired(2);
    S.takeDamage(2);
    S.beRepaired(2);
    S.attack("A");
    C.takeDamage(2);
    C.beRepaired(2);
    C.takeDamage(2);
    C.beRepaired(2);
    C.takeDamage(2);
    C.beRepaired(2);
    C.attack("b");
    C.takeDamage(2);
    C.attack("2");
    S.guardGate();
    std::cout << "----------------------------------------------------------------------------------\n";
    return (0);
}