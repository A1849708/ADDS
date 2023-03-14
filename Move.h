#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
    public:
        virtual bool winsAgainst (Move* move);
        virtual std::string getName ();
};

#endif