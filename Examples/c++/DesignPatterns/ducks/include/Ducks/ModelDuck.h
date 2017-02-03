#ifndef MODEL_DUCK_H 
#define MODEL_DUCK_H 
#include "Duck.h"
#include "Quack.h"
#include "FlyNoWay.h"

class ModelDuck : public Duck
{
  public: 
    ModelDuck();
    ~ModelDuck();
    virtual bool Display();     

};



#endif //MODEL_DUCK_H

