/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:48:30 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:00:11 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") 
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string const & type ) : type(type) 
{
    std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) : type(src.type) 
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs ) 
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if ( this != &rhs ) 
        type = rhs.type;
    return *this;
}

Animal::~Animal( void ) 
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string const & Animal::getType( void ) const 
{
    return type;
}
