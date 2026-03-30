#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
    WrongAnimal( void );
    WrongAnimal( std::string const & type );
    WrongAnimal( WrongAnimal const & src );
    WrongAnimal & operator=( WrongAnimal const & rhs );
    virtual ~WrongAnimal( void );

    std::string const & getType( void ) const;
    void makeSound( void ) const;

protected:
    std::string type;
};

#endif // WRONGANIMAL_HPP
