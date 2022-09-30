#ifndef CONTA_H
#define CONTA_H
#include <string>


class Conta
{
private:
    double saldo;
    int senha;
public:
    Conta();
    Conta(int senha, int numero, std::string titular, std::string tipo, double saldo);
    ~Conta();
    int numero;
    std::string titular;
    std::string tipo;
    void exibeDados();
    double getSaldo(int senha);
    void setSaldo(double valor);
    void setSenha(int novaSenha);
    bool deposito(double valor);
    bool saque(int senha, double valor);
    bool validaSenha(int senha);
    bool transferir(float valorParaTransferir, Conta* contaDestino, int senha);

};


#endif