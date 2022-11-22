/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:39:11 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 13:39:12 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & obj );
	~Cat( void );
	Cat & operator=( Cat const & obj );

	void	makeSound( void ) const ;

};

#endif