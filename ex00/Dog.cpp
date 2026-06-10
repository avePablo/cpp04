/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:47:45 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:58:46 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") 
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal( src ) 
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) 
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if ( this != &rhs )
        Animal::operator=( rhs );
    return *this;
}

Dog::~Dog( void ) 
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const 
{
    std::cout << "Woof!" << std::endl;
}
