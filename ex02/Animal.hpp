#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
    Animal( void );
    Animal( std::string const & type );
    Animal( Animal const & src );
    Animal & operator=( Animal const & rhs );
    virtual ~Animal( void );

    std::string const & getType( void ) const;
    virtual void makeSound( void ) const = 0;

protected:
    std::string type;
};

#endif // ANIMAL_HPP
