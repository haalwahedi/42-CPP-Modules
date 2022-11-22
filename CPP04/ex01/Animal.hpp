/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:17 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 18:03:02 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

# define ANMAL_ARR 4

class Animal 
{

protected:

	std::string	_type;

public:

	Animal();
	Animal( Animal const &obj );
	virtual ~Animal( );
	Animal & operator=( Animal const &obj );

	virtual void	makeSound( ) const ;
	std::string		getType( ) const;
	// virtual Brain	*get_brain() const;
};

#endif