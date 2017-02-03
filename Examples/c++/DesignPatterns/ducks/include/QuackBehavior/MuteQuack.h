#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include <iostream>
#include "QuackBehavior.h"

class MuteQuack: public QuackBehavior
{
  public:
      virtual ~MuteQuack();
      virtual bool quack();
};



#endif //MUTE_QUACK_H
