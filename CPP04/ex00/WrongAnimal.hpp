/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:55 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:56 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & obj );
	~WrongAnimal( void );
	WrongAnimal & operator=( WrongAnimal const & obj );

	void			makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif