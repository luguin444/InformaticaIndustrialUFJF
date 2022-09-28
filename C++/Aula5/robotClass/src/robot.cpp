#include "robot.h"
#include <iostream>
using namespace std;

void Robot::showPos()
{
	cout << "Position X: " << this->pos[0] << endl;
	cout << "Position Y: " << this->pos[1] << endl;
}

void Robot::move(float time)
{
	this->pos[0] += time * this->speed[0];
	this->pos[1] += time * this->speed[1];
}

void Robot::changeSpeed(float speedX, float speedY)
{
	this->speed[0] = speedX;
	this->speed[1] = speedY;
}
