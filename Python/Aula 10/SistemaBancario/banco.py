# -*- coding: utf-8 -*-
from contas import Conta


class Banco():
    __contas = []

    def __init__(self):
        self.__contas.append(Conta(1, "João", 1234, 500))
        self.__contas.append(Conta(2, "João", 4567, 800))

    def buscaConta(self, numero):
        for conta in self.__contas:
            if conta.numero == numero:
                return conta

    def atendimento(self):
        print("Bem vindo ao sistema de atendimento do banco")
        atendimento = True

        while (atendimento):
            tipoAtendimento = input(
                "Qual seu tipo de cliente: 1- Cliente , 2- Funcionário")

            if tipoAtendimento == "1":
                print("Bem vindo ao atendimento dos clientes")
            elif tipoAtendimento == "2":
                print("Bem vindo ao atendimento dos funcionarios")
            else:
                print("Digite algum tipo de atendimento válido")

        # numConta = input("Digite o numero da sua conta: ")
        # contaCliente = self.buscaConta(int(numConta))
        # print(contaCliente)

        # if contaCliente == None:
        #     print("Conta inválida")
        # else:
        #     print("check")
