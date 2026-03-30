#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {
    const int count = 4;
    const Animal* animals[count];

    for ( int i = 0; i < count; ++i ) {
        if ( i < count / 2 )
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for ( int i = 0; i < count; ++i ) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    std::cout << "----- deep copy test -----" << std::endl;
    Dog* firstDog = new Dog();
    firstDog->getBrain()->setIdea(0, "Chase the mailman");
    Dog* secondDog = new Dog(*firstDog);
    secondDog->getBrain()->setIdea(0, "Nap time");

    std::cout << "firstDog idea: " << firstDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "secondDog idea: " << secondDog->getBrain()->getIdea(0) << std::endl;

    delete firstDog;
    delete secondDog;

    for ( int i = 0; i < count; ++i ) {
        delete animals[i];
    }
    return 0;
}
