/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:28:05 by halwahed          #+#    #+#             */
/*   Updated: 2022/10/25 13:28:07 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

/*  FUNCTION POINTER
**  https://stackoverflow.com/questions/4295432/typedef-function-pointer
*/
typedef void(Harl::*cFunc) (void);

Harl::Harl(void) {};
Harl::~Harl(void) {};

void        Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-" \
    << "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void        Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money." \
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t" \
    << "be asking for more!" << std::endl;
}

void        Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free." \
    << "I’ve been coming for years whereas you started working here since" \
    << " last month." << std::endl;
}

void        Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." \
    << std::endl;
}

void        Harl::complain(std::string level) {
    int         i = 0;
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    cFunc       outputF[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    while (i < 4 && (list[i] != level)) i++; 
    if (i >= 4)
        return ;		
    (this->*(outputF[i]))();
}