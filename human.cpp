#include <iostream>
#include "human.h"
using namespace std;

class Human {
    private:
        char move;
        string name;
    public:
        void getMove(char Amove);
        void getName (string Aname);
};