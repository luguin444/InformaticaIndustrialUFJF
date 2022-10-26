#include "mobileRobot.h"
#include <iostream>

MobileRobot::MobileRobot() // Construtor da Classe conta, quando nenhum parametro é declarado(Padrão)
{
    this->PosicaoAtual[0] = 0;
    this->PosicaoAtual[1] = 0;
    this->PosicaoAtual[2] = 0;
}

MobileRobot::MobileRobot(double x, double y, double z) // Construtor da classe conta que recebe parametros(Personalizado)
{
    this->PosicaoAtual[0] = x;
    this->PosicaoAtual[1] = y;
    this->PosicaoAtual[2] = z;
}

MobileRobot::~MobileRobot() // Destrutor da Classe conta
{
}

double MobileRobot::getPosicaoAtual(char coordenada) // Metodo que exibe no terminal informações sobre a conta
{
    if (coordenada == 'x')
        return this->PosicaoAtual[0];
    if (coordenada == 'y')
        return this->PosicaoAtual[1];
    if (coordenada == 'z')
        return this->PosicaoAtual[2];
}

void MobileRobot::setPosicaoAtual(double X, double Y, double Z) // Metodo que exibe no terminal informações sobre a conta
{
    this->PosicaoAtual[0] = X;
    this->PosicaoAtual[1] = Y;
    this->PosicaoAtual[2] = Z;
}