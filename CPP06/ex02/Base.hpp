/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamdas <hamdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:51:55 by halwahed          #+#    #+#             */
/*   Updated: 2022/12/07 02:02:33 by hamdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
#define BASE

class Base {
    public:
        virtual ~Base(void) {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif