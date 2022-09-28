#include <robot.h>

int main()
{
	Robot r1, r2;

	r1.showPos(); 
	r2.showPos();

	r1.changeSpeed(1,2);
	r2.changeSpeed(3,4);


	r1.move(4);
	r2.move(5);

	r1.showPos(); 
	r2.showPos();
}
