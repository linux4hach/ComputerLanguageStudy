#ifndef RUBBER_DUCKY_H 
#define RUBBER_DUCKY_H 
#include "Duck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

class RubberDucky : public Duck
{
  public: 
    RubberDucky();
    ~RubberDucky();
    virtual bool Display();     

};



#endif //MALLARD_DUCK_H

