#include "quadrotor.h"
#include <iostream>

using namespace std;

Quadrotor::Quadrotor() : MobileRobot::MobileRobot()
{
}

Quadrotor::~Quadrotor()
{
}

void Quadrotor::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{
     cout << "Acionando as hélices" << endl;

     cout << "Posição antes do movimento: " << endl
          << "X: " << this->PosicaoAtual[0] << endl
          << "Y: " << this->PosicaoAtual[1] << endl
          << "Z: " << this->PosicaoAtual[2] << endl;

     this->PosicaoAtual[0] += Xvel * tempo;
     this->PosicaoAtual[1] += Yvel * tempo;
     this->PosicaoAtual[2] += Zvel * tempo;

     cout << "Posição depois do movimento: " << endl
          << "X: " << this->PosicaoAtual[0] << endl
          << "Y: " << this->PosicaoAtual[1] << endl
          << "Z: " << this->PosicaoAtual[2] << endl;
}