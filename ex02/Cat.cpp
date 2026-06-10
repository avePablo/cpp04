/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:48:43 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:54:23 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"), _brain( new Brain() ) 
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal( src ), _brain( new Brain( *src._brain ) ) 
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ) 
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if ( this != &rhs ) {
        Animal::operator=( rhs );
        if ( _brain )
            delete _brain;
        _brain = new Brain( *rhs._brain );
    }
    return *this;
}

Cat::~Cat( void ) 
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const 
{
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain( void ) const 
{
    return _brain;
}
