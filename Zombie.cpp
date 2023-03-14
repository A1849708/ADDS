#include <iostream>
#include "Zombie.h"

using namespace std;

string Zombie::getName() { return "Zombie"; }

bool Zombie::winsAgainst(Move* move) {
  if (move->getName() == "Pirate" || move->getName() == "Monkey"){
    return true;
  };
return false;
}