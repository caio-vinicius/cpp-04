/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "Animal.hpp"
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
    Cat::type = rhs.type;
    Cat::brain = new Brain(*(rhs.brain));
    return (*this);
}

Cat::Cat(Cat const &src): Animal(src) {
    Cat::type = src.type;
    Cat::brain = new Brain(*(src.brain));
    *this = src;
}

void Cat::makeSound(void) const {
    std::cout << "Cat sound: Meow Meow... Meow!" << std::endl;
}
