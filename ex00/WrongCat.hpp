/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:47:16 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 15:01:22 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
public:
    WrongCat( void );
    WrongCat( WrongCat const & src );
    WrongCat & operator=( WrongCat const & rhs );
    ~WrongCat( void );

    void makeSound( void ) const;
};

#endif
