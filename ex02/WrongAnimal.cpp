/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:49:09 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:00:44 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") 
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string const & type ) : type(type) 
{
    std::cout << "WrongAnimal parameter constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) : type(src.type) 
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) 
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if ( this != &rhs ) 
        type = rhs.type;
    return *this;
}

WrongAnimal::~WrongAnimal( void ) 
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string const & WrongAnimal::getType( void ) const 
{
    return type;
}

void WrongAnimal::makeSound( void ) const 
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}
