#include <iostream>
#include "Monkey.h"

using namespace std;

string Monkey::getName() { return "Monkey"; }

bool Monkey::winsAgainst(Move* move) {
  if (move->getName() == "Ninja" || move->getName() == "Robot"){
    return true;
  }
  return false;
}