#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
   public:
      virtual void makeMove()=0;
      virtual char returnMove()=0;
      virtual std::string getName()=0;
};

#endif