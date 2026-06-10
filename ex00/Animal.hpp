/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:47:27 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:46:53 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
public:
    Animal( void );
    Animal( std::string const & type );
    Animal( Animal const & src );
    Animal & operator=( Animal const & rhs );
    virtual ~Animal( void );

    std::string const & getType( void ) const;
    virtual void makeSound( void ) const;

protected:
    std::string type;
};

#endif 
