#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

#include <string>

class Referee {
    private:
        char move;
    public:
        Referee ();
        Player * refGame(Player * player1, Player * player2);
};
#endif

