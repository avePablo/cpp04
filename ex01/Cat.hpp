/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:47:37 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:01:40 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
public:
    Cat( void );
    Cat( Cat const & src );
    Cat & operator=( Cat const & rhs );
    virtual ~Cat( void );

    virtual void makeSound( void ) const;
    Brain* getBrain( void ) const;

private:
    Brain* _brain;
};

#endif
