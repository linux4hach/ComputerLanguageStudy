#include "RubberDucky.h"

RubberDucky::RubberDucky()
{
    quackBehavior = new Squeak;
    flyBehavior = new FlyNoWay;

}

RubberDucky::~RubberDucky()
{
}


bool RubberDucky::Display()
{
    std::cout<<"I am a rubber ducky!"<<std::endl;
    return true;
}


