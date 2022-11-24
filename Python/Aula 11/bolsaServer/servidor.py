import socket
from yahooquery import Ticker


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
        print("Atendendo cliente ", client)
        while True:
            try:
                msg = con.recv(1024)
                msg_s = str(msg.decode('ascii'))
                operation, action = msg_s.split(',')

                ticker_info = Ticker(action).summary_detail[action]

                print(ticker_info)

                if operation == 'd':  # dividend_rate
                    resp = ticker_info['dividendRate']
                elif operation == 'b':  # beta
                    resp = ticker_info['beta']
                elif operation == 'm':  # market Capitalization
                    resp = ticker_info['marketCap']
                elif operation == 'o':  # open price
                    resp = str(ticker_info['open']) + \
                        " " + ticker_info['currency']
                else:
                    resp = "Operação inválida"

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
