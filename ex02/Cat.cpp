/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat() {
    Cat::type = "Cat";
    Cat::brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete Cat::brain;
}

Cat &Cat::operator=(Cat const &rhs) {
    (void)rhs;
    return (*this);
}

Cat::Cat(Cat const &src): AAnimal(src) {
    *this = src;
}

void Cat::makeSound(void) const {
    std::cout << "Cat sound: Meow Meow... Meow!" << std::endl;
}
