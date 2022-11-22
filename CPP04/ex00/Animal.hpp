/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:00 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:01 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal 
{

protected:

	std::string	_type;

public:

	Animal( void );
	Animal( Animal const &obj );
	virtual ~Animal( void );
	Animal & operator=( Animal const &obj );

	virtual void	makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif