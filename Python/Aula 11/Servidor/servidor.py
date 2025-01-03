import socket


class Servidor():
    def __init__(self, host, port):
        self._host = host
        self._port = port

    def start(self):
        # instancia o objeto socket(familia de endereços, camada de transporte TCP)
        self.__tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        endpoint = (self._host, self._port)  # Uma tupla com duas posições

        try:
            self.__tcp.bind(endpoint)  # servidor ouvindo nesse endpoint
            self.__tcp.listen(1)  # socket ouvindo
            print("Servidor iniciado em ", self._host, ": ", self._port)
            while True:
                # comando bloqueante => fica em standBy até o cliente chamar
                con, client = self.__tcp.accept()  # retorna dados do cliente e o cliente
                self._service(con, client)
        except Exception as e:
            print("Erro ao inicializar o servidor", e.args)

    def _service(self, con, client):
        """
        Método que implementa o serviço de calculadora
        :param con: objeto socket utilizado para enviar e receber dados
        :param client: é o endereço do cliente
        """
        print("Atendendo cliente ", client)
        # operadores = ['+', '-', '*', '/']
        while True:
            try:
                # pega só os primeiros 1024 bytes. Ex: "10+ 3x10"
                msg = con.recv(1024)
                msg_s = str(msg.decode('ascii'))  # convertend bytes em string
                # decodifica uma expressão algebrica e resolve
                resp = eval(msg_s)
                # op = "none"
                # for x in operadores:
                #     if msg_s.find(x) > 0:
                #         op = x
                #         msg_s = msg_s.split(op)
                #         break
                # if op == '+':
                #     resp = float(msg_s[0]) + float(msg_s[1])
                # elif op == '-':
                #     resp = float(msg_s[0]) - float(msg_s[1])
                # elif op == '*':
                #     resp = float(msg_s[0]) * float(msg_s[1])
                # elif op == '/':
                #     resp = float(msg_s[0]) / float(msg_s[1])
                # else:
                #     resp = "Operação inválida"

                # transformamos em bytes dnv e enviando para o cliente
                con.send(bytes(str(resp), 'ascii'))
                print(client, " -> requisição atendida")
            except OSError as e:  # erro de conexão
                print("Erro de conexão ", client, ": ", e.args)
                return
            except Exception as e:  # exception generica
                print("Erro nos dados recebidos pelo cliente ",
                      client, ": ", e.args)
                con.send(bytes("Erro", 'ascii'))
