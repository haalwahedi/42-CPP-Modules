/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:50:31 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/08 14:52:27 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

//	Serialize converts a data structure address and converts it to a serial number
uintptr_t	serialize(Data* ptr) {
	uintptr_t	raw;
	
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

//	Deserialize converts back to pointer, a serialized number
Data		*deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }

int		main(void) {
	std::cout << "[Serialize e G]" << std::endl;
	Data	*ptr = new Data();

	if (!ptr)
		return (1);
	ptr->num = 42;
	std::cout << "At the beggining: " << ptr <<std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	uintptr_t raw = serialize(ptr);
	std::cout << "Serialize the data: " << raw << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	Data	*ret = deserialize(raw);
	std::cout << "Deserialization of data: " << ret <<std::endl;
	
	delete ptr;
	return (0);
}