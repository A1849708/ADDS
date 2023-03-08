#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

#include <string>

class Computer : public Player{
    private:
        char compMove;
        std::string compName;
    public:
        Computer ();
        void makeMove();
        std::string getName();
        char returnMove();
};

#endif