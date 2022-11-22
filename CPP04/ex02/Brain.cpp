/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:21 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:24:10 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain( Brain const &obj ) {
	std::cout << "copy constructor Brain called" << std::endl;
	*this = obj;
}

Brain::~Brain() {
	std::cout << "Default destructor Brain called" << std::endl;
}

Brain & Brain::operator=( Brain const &obj ) 
{
    int i;

    if (this == &obj)
        return (*this);
    for (i = 0; i < IDEAS_SIZE; i++)
    {
        this->b_ideas[i] = obj.b_ideas[i];
        this->ideas_count++; 
    }
    if (this->ideas_count == IDEAS_SIZE)
		this->ideas_count = 0;
    std::cout << "Brain: Assignment operator called " <<std::endl;
    return (*this);
}

void	Brain::ideas_pool()
{
	std::cout << "All Brain thoughts.." << std::endl;
	int i;

    for (i = 0; i < IDEAS_SIZE; i++)
    {
		if (this->b_ideas[i].empty())
			break;
        std::cout << this->b_ideas[i] << std::endl;
    }
}