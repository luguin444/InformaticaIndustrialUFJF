#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

#define NUMCONTAS 100

class Banco
{
private:
    Conta contas[NUMCONTAS];
public:
    Banco();
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    void atendimento();
};


#endif
