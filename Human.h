#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

#include <string>

class Human : public Player{
    private:
        char humanMove;
        std::string humanName;
    public:
        Human();
        Human (std::string name);
        void makeMove ();
        char returnMove();
        std::string getName();
};

#endif