#include <iostream>
#include "myInverter.h"

using namespace std;

#define TAM 256

int main()
{
	char name[TAM];
    char invertedName[TAM];

    // avisar usuario maximo de 256 caracteres, caso ele digitar?
    // retornar array. Como declaro char[] foo() {} ?


    cout << "Digite seu nome: " << endl;
    cin >> name;

    nameInverter(name);

    return 0;
}