#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move{
    private:
        std::string getName ();
        bool winsAgainst (Move* move);
};

#endif