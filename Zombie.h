#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

#include "Move.h"

class Zombie : public Move{
    private:
        std::string getName ();
        bool winsAgainst (Move* move);
};

#endif