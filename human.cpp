#include <iostream>
#include "player.h"
#include "human.h"
using namespace std;

class Human {
    private:
        string name;
    public:
        void setName (string aName){
            name=aName;
        };
        string getName (){
            return name;
        }
};