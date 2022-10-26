#ifndef TERRESTRE_H
#define TERRESTRE_H
#include "mobileRobot.h"

class Terrestre : public MobileRobot // ContaPoupanca deriva de Conta, E todos os atributos publicos da Conta continuam publicos para Contacorrente assim como os privados e protegidos
{

public:
    Terrestre();
    ~Terrestre();
    void Mover(double Xvel, double Yvel, double Zvel, double tempo);
};

#endif
