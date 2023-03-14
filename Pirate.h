#ifndef PIRATE_H
#define PIRATE_H
#include <string>

#include "Move.h"

class Pirate : public Move{
    private:
        std::string getName ();
        bool winsAgainst (Move* move);
};

#endif