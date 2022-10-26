#include <iostream>
#include "mobileRobot.h"
#include "quadrotor.h"
#include "terrestre.h"

using namespace std;

void ExecutaMovimento(MobileRobot *robot)
{
    double velX = (rand() % 100) - 101;
    double velY = (rand() % 100) - 101;
    double velZ = (rand() % 100) - 101;
    double tempo = (rand() % 25) + 1;

    cout << endl
         << "Velocidades sorteads" << endl
         << "X: " << velX << endl
         << "Y: " << velY << endl
         << "Z: " << velZ << endl
         << "Tempo do trajeto: " << tempo << endl
         << endl;

    robot->Mover(velX, velY, velZ, tempo);
}

int main()
{

    cout << "Movimento Quadrotor " << endl;
    Quadrotor quadObject;
    ExecutaMovimento(&quadObject);

    cout << endl
         << endl
         << "Movimento Robo terrestre " << endl;
    Terrestre terresteObject;
    ExecutaMovimento(&terresteObject);

    return 0;
}
