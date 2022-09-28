#include <robot.h>

using namespace std;

int main()
{
	Robot r1, r2;

	r1.pos[0] = 0; 
	r1.pos[1] = 0; 
	r2.pos[0] = 0; 
	r2.pos[1] = 0; 

	r1.showPos(); 
	r2.showPos();

	r1.changeSpeed(1,2);
	r2.changeSpeed(3,4);


	r1.move(3);
	r2.move(3);

	r1.showPos(); 
	r2.showPos();
}
