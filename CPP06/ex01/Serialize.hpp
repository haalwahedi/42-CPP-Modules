/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamdas <hamdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:51:13 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/06 15:31:07 by hamdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>

/*	SERIALIZATION
** I used stdint.h instead of cstdint, as uintptr_t was originally implemented in c++99(stdint.h)
** cstdint corresponds to c++11 that enters the d and forbidden category.
** The structure can have anything inside.. just to populate it with something, I put a "num"
*/
typedef struct s_data {
	int		num;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif