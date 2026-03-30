#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), _brain( new Brain() ) {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal( src ), _brain( new Brain( *src._brain ) ) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if ( this != &rhs ) {
        Animal::operator=( rhs );
        if ( _brain )
            delete _brain;
        _brain = new Brain( *rhs._brain );
    }
    return *this;
}

Dog::~Dog( void ) {
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const {
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain( void ) const {
    return _brain;
}
