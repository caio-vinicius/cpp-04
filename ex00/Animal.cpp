/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Animal.hpp"

Animal::Animal() {
    Animal::type = "Indistinctly animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
    (void)rhs;
    return (*this);
}

Animal::Animal(Animal const &src) {
    (void)src;
    *this = src;
}

void Animal::makeSound(void) const {
    std::cout << "Animal sound: [ UNRECOGNIZABLE NOISES FROM SOME ANIMAL ]" << std::endl;
}

std::string Animal::getType(void) const {
    return (Animal::type);
}
