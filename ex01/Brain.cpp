/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
    (void)rhs;
    return (*this);
}

Brain::Brain(Brain const &src) {
    std::cout << "Brain constructor called" << std::endl;
    (void)src;
    for (unsigned int i = 0; i < AMOUNT_IDEAS; i++) {
        Brain::ideas[i] = src.ideas[i];
    }
    *this = src;
}

void Brain::setIdea(std::string idea, unsigned int pos) {
    Brain::ideas[pos] = idea;
}

std::string Brain::getIdea(unsigned int pos) {
    return Brain::ideas[pos];
}
