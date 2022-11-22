/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:30 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/21 17:23:38 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

# define IDEAS_SIZE 100

class Brain {

protected:

	unsigned    int ideas_count;

public:

	Brain();
	Brain( Brain const &obj );
	~Brain();
	Brain &operator=( Brain const &obj );

    std::string     b_ideas[IDEAS_SIZE];
    void        	ideas_pool();
};

#endif