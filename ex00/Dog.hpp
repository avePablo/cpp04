/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:47:58 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:50:22 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
public:
    Dog( void );
    Dog( Dog const & src );
    Dog & operator=( Dog const & rhs );
    virtual ~Dog( void );

    virtual void makeSound( void ) const;
};

#endif
