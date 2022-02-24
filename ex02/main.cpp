/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int brains(void) {
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    std::cout << std::endl;
    {
        int len = 4;
        AAnimal **animals = new AAnimal*[len];
        for (int i = 0; i < len; i++) {
            if (i >= len / 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        for (int i = 0; i < len; i++) {
            delete animals[i];
        }
        delete [] animals;
    }
    // { AAnimal animal; }
    return 0;
}

int main(void) {
    brains();
    return (0);
}
