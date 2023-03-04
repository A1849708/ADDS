#include <iostream>
#include "player.h"
#include "human.h"
using namespace std;

class Human : private Player{
    private:
        string name;
    public:
        Human (){
            name="human";
        }
        Human (string aName){
            name=aName;
        }

        void setName (string aName){
            name=aName;
        };
        string getName (){
            return name;
        }

        char makeMove (string choice);


};