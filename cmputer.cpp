#include <iostream>

#include "Computer.h"

using namespace std;


        Computer::Computer (){
            this->compName="Computer";
        }
        char Computer::makeMove(){this->compMove='R'; return compMove;}
        string Computer::getName(){return compName;}
        char returnMove(){};
