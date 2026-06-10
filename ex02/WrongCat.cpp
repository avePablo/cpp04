/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:49:15 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:00:53 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") 
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src ) 
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) 
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if ( this != &rhs ) 
        WrongAnimal::operator=( rhs );
    return *this;
}

WrongCat::~WrongCat( void ) 
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const 
{
    std::cout << "WrongCat meows wrongly" << std::endl;
}
