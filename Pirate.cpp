#include <iostream>
#include "Pirate.h"

using namespace std;

string Pirate::getName() { return "Pirate"; }

bool Pirate::winsAgainst(Move* move) {
  return (move->getName() == "Monkey" || move->getName() == "Robot");
}