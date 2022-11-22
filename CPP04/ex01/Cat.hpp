/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:52 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:13:53 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
private:
	Brain *c;
public:

	Cat();
	Cat( Cat const &obj );
	virtual ~Cat();
	Cat &operator=( Cat const &obj);

	void			makeSound() const ;
	void			display_all() const;
	virtual Brain 	*get_brain() const;

};

#endif