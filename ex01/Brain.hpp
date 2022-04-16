/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define AMOUNT_IDEAS 100

class Brain {
 public:
    Brain(void);
    virtual ~Brain(void);
    Brain &operator=(Brain const &rhs);
    Brain(Brain const &src);
    void setIdea(std::string idea, unsigned int pos = 0);
    std::string getIdea(unsigned int pos = 0);
 protected:
 private:
    std::string ideas[AMOUNT_IDEAS];
};

#endif
