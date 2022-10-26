#ifndef QUADRATOR_H
#define QUADRATOR_H
#include "mobileRobot.h"

class Quadrotor : public MobileRobot
{
public:
    Quadrotor();
    ~Quadrotor();
    void Mover(double Xvel, double Yvel, double Zvel, double tempo);
};

#endif
