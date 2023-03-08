#include <iostream>
#include "Human.h"

using namespace std;


        Human::Human (){this->humanName="Human";}
        Human::Human(string name){this->humanName=name;}
        void Human::makeMove(){cout<<"\nEnter in a move: ";cin>>humanMove;}
        char Human::returnMove(){return humanMove;}
        string Human::getName(){return humanName;}
