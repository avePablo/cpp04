/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:47:49 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/10 14:52:39 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) 
{
    const int count = 4;
    const Animal* animals[count];

    for ( int i = 0; i < count; ++i ) 
    {
        if ( i < count / 2 )
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for ( int i = 0; i < count; ++i ) 
    {
        animals[i]->makeSound();
    }

    std::cout << "----- deep copy test -----" << std::endl;
    Dog* firstDog = new Dog();
    firstDog->getBrain()->setIdea(0, "I want food");
    Dog* secondDog = new Dog(*firstDog);
    secondDog->getBrain()->setIdea(0, "I want sleep");

    std::cout << "firstDog idea: " << firstDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "secondDog idea: " << secondDog->getBrain()->getIdea(0) << std::endl;

    delete firstDog;
    delete secondDog;

    for ( int i = 0; i < count; ++i ) 
    {
        delete animals[i];
    }

    std::cout << "----- Wrong animals -----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    wrongMeta->makeSound();
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;
    return 0;
}
