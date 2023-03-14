#ifndef ROBOT_H
#define ROBOT_H
#include <string>

#include "Move.h"

class Robot : public Move{
    private:
        std::string getName ();
        bool winsAgainst (Move* move);
};

#endif