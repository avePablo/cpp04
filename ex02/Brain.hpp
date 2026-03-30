#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
    Brain( void );
    Brain( Brain const & src );
    Brain & operator=( Brain const & rhs );
    ~Brain( void );

    std::string getIdea( int index ) const;
    void setIdea( int index, std::string const & idea );

private:
    std::string ideas[100];
};

#endif // BRAIN_HPP
