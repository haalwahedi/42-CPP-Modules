/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:43:30 by halwahed          #+#    #+#             */
/*   Updated: 2022/11/22 15:43:31 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &rhs);

        std::string getName() const;
        int			getGrade() const;

        void incrementGrade();
        void decrementGrade();
		void signForm(Form &f);

        class GradeTooHighException :public std::exception
        {
            public: virtual const char *what() const throw();
        };
        class GradeTooLowException :public std::exception
        {
            public:virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
