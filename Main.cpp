#include <iostream>
#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main (){
    Player* theComputer = new Computer;
    Player* theHuman = new Human ("alex");
    Player* winner;

    Referee* theReferee = new Referee;
    

    winner = theReferee->refGame(theComputer,theHuman);
    if(winner != nullptr){
        cout<<winner->getName()<<endl;
    }


}