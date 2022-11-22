/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:26 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:27 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & obj );
	~Dog( void );
	Dog & operator=( Dog const & obj );

	void	makeSound( void ) const ;
};

#endif