/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:47:28 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:51:44 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) 
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const & src ) 
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=( Brain const & rhs ) 
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if ( this != &rhs ) 
    {
        for ( int i = 0; i < 100; ++i ) 
        {
            ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain( void ) 
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea( int index ) const 
{
    if ( index < 0 || index >= 100 )
        return std::string();
    return ideas[index];
}

void Brain::setIdea( int index, std::string const & idea ) 
{
    if ( index < 0 || index >= 100 )
        return;
    ideas[index] = idea;
}
