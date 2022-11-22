/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:41:02 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:15:36 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *d;
public:

	Dog();
	Dog( Dog const &obj );
	virtual ~Dog();
	Dog &operator=( Dog const &obj );

	void				makeSound() const;
	void				display_all() const;
    virtual Brain	    *get_brain() const;	
};

#endif