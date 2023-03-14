#include <iostream>
#include "Ninja.h"

using namespace std;

string Ninja::getName() { return "Ninja"; }

bool Ninja::winsAgainst(Move* move) {
  if (move->getName() == "Pirate" || move->getName() == "Zombie"){
    return true;
  }
  return false;
}