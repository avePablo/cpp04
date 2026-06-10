/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:47:47 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:01:46 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
public:
    Dog( void );
    Dog( Dog const & src );
    Dog & operator=( Dog const & rhs );
    virtual ~Dog( void );

    virtual void makeSound( void ) const;
    Brain* getBrain( void ) const;

private:
    Brain* _brain;
};

#endif
