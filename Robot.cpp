#include <iostream>
#include "Robot.h"

using namespace std;

string Robot::getName() { return "Robot"; }

bool Robot::winsAgainst(Move* move) {
  if (move->getName() == "Ninja" || move->getName() == "Zombie"){
    return true;
  }
  return false;
}