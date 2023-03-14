#ifndef MONKEY_H
#define MONKEY_H
#include <string>

#include "Move.h"

class Monkey : public Move{
    private:
        std::string getName ();
        bool winsAgainst (Move* move);
};

#endif