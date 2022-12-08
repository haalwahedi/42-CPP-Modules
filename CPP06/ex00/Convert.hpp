/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:36:47 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/08 14:36:48 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <climits>
# include <limits>

//	CASTING - https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
class Convert {
	private:
	protected:
	public:
		Convert(void);
		~Convert(void);
		Convert(Convert const &copy);
		Convert	&operator=(Convert const &copy);
		//	CONVERTERS
		void	conversor(std::string arg);
		void	convertChar(std::string arg);
		void	convertInt(std::string arg);
		void	convertFloat(std::string arg);
		void	convertDouble(std::string arg);
		// CLASSES OF EXCEPTIONS
		class ImpossibleCharConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class ImpossibleIntConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class NanFloatConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class NanDoubleConversion: public std::exception {
			virtual const char *what() const throw();
		};
};

#endif