#include <iostream>
using namespace std;

void nameInverter(char* name)
{

	char actual = name[0];
	int nameSize = 0;
	int i;

	// suportar espaço em branco
	while(actual != '\0') {
		nameSize += 1;
		actual = name[nameSize];
	}

	for(i=nameSize-1; i>=0; i--) {
		cout << name[i];
	}

	cout << endl;
}
