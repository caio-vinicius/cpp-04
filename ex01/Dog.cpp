/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() {
    Dog::type = "Dog";
    Dog::brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete Dog::brain;
}

Dog &Dog::operator=(Dog const &rhs) {
    (void)rhs;
    return (*this);
}

Dog::Dog(Dog const &src): Animal(src) {
    *this = src; 
}

void Dog::makeSound(void) const {
    std::cout << "Dog sound: Bark bark... Bark!" << std::endl;
}
