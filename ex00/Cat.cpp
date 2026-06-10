/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:47:50 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:13:32 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") 
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal( src ) 
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ) 
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if ( this != &rhs )
        Animal::operator=( rhs );
    return *this;
}

Cat::~Cat( void ) 
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const 
{
    std::cout << "Meow!" << std::endl;
}
