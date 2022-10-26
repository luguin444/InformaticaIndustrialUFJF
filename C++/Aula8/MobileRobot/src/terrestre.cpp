#include "terrestre.h"
#include <iostream>

using namespace std;

Terrestre::Terrestre() : MobileRobot::MobileRobot()
{
}

Terrestre::~Terrestre()
{
}

void Terrestre::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{
     cout << "Acionando os motores das rodas" << endl;

     cout << "Posição antes do movimento: " << endl
          << "X: " << this->PosicaoAtual[0] << endl
          << "Y: " << this->PosicaoAtual[1] << endl
          << "Z: " << this->PosicaoAtual[2];

     this->PosicaoAtual[0] += Xvel * tempo;
     this->PosicaoAtual[1] += Yvel * tempo;

     cout << "Posição depois do movimento: " << endl
          << "X: " << this->PosicaoAtual[0] << endl
          << "Y: " << this->PosicaoAtual[1] << endl
          << "Z: " << this->PosicaoAtual[2] << endl;
}