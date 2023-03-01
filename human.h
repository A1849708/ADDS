#include "player.h"

#ifndef HUMAN_H
#define HUMAN_H

#include <string>


class Human: public Player {
    std::string name;
    name = "human"
char makeMove();
std:: string getName();      
};

#endif