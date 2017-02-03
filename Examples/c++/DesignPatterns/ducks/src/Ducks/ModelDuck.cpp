#include "ModelDuck.h"

ModelDuck::ModelDuck()
{
    quackBehavior = new Quack;
    flyBehavior = new FlyNoWay;

}

ModelDuck::~ModelDuck()
{
}


bool ModelDuck::Display()
{
    std::cout<<"I am a model Duck!"<<std::endl;
    return true;
}


