/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:47:21 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:49:54 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
public:
    Cat( void );
    Cat( Cat const & src );
    Cat & operator=( Cat const & rhs );
    virtual ~Cat( void );

    virtual void makeSound( void ) const;
};

#endif 
