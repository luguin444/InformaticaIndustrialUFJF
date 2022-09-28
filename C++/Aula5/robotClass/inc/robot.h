#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
	private: //Atributos privados só podem ser acessados pela classe e seus metodos

	public:	//Podem ser acessados direto no main
		int id;
		float pos[2] = {0,0}; 
		float speed[2]; 
		void showPos();
		void move(float time);
		void changeSpeed(float speedX, float speedY);
};

#endif
