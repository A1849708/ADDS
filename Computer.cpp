#include <iostream>

#include "Computer.h"

using namespace std;


        Computer::Computer (){this->compName="Computer";}
        void Computer::makeMove(){this->compMove='R';}
        string Computer::getName(){return compName;}
        char Computer::returnMove(){return compMove;}
