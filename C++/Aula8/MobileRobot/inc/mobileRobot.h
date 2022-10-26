#ifndef MOBILE_ROBOT_H
#define MOBILE_ROBOT_H

class MobileRobot
{
protected:
    double PosicaoAtual[3];

public:
    MobileRobot();
    MobileRobot(double x, double y, double z);
    ~MobileRobot();
    double getPosicaoAtual(char coordenada);
    void setPosicaoAtual(double X, double Y, double Z);
    virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo) = 0;
};

#endif