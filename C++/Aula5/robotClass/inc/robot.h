#ifndef CONTA_H
#define CONTA_H

#include <string>

class Robot {
	private: //Atributos privados só podem ser acessados pela classe e seus metodos

	public:	//Podem ser acessados direto no main
		int id;
		float pos[2]; 
		float speed[2]; 
		void showPos();
		void move(float time);
		void changeSpeed(float speedX, float speedY);
};

#endif
