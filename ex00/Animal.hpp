/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 public:
    Animal(void);
    virtual ~Animal(void);
    Animal &operator=(Animal const &rhs);
    Animal(Animal const &src);
    virtual void makeSound(void) const;
    std::string getType(void) const;
 protected:
    std::string type;
};

#endif
