#include <iostream>
#include "Referee.h"
#include "Player.h"

using namespace std;

Referee::Referee(){}
Player * Referee::refGame(Player * player1, Player * player2){
    player1->makeMove();
    player2->makeMove();

    if (player1->returnMove()=='R'&&player2->returnMove()=='R'){
      return nullptr;
    }
    else if (player1->returnMove()=='R'&&player2->returnMove()=='P'){
      return player2;
    }
    else if (player1->returnMove()=='P'&&player2->returnMove()=='R'){
      return player1;
    }
    else if (player1->returnMove()=='R'&&player2->returnMove()=='S'){
      return player1;
    }
    else if (player1->returnMove()=='S'&&player2->returnMove()=='R'){
      return player2;
    }
    else if (player1->returnMove()=='P'&&player2->returnMove()=='P'){
      return nullptr;
    }
    else if (player1->returnMove()=='P'&&player2->returnMove()=='S'){
      return player2;
    }
    else if (player1->returnMove()=='S'&&player2->returnMove()=='P'){
      return player1;
    }
    else if (player1->returnMove()=='S'&&player2->returnMove()=='S'){
      return nullptr;
    }
    return nullptr;
}
