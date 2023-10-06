class Conta:
    def __init__(self, numero, titular, saldo=0, limite=1000.0):
        self._numero = numero
        self._titular = titular
        self._saldo = saldo
        self._limite = limite

    def deposita(self, valor):
        self._saldo += valor

class ContaInvestimento(Conta):
    def atualiza(self, taxa):
        self._saldo += self._saldo * taxa * 5

class ContaCorrente(Conta):
    def __init__(self, numero, titular, saldo=0, limite=1000.0):
        self.numero = numero
        self.titular = titular
        self.saldo = saldo
        self.limite = limite

    def atualiza(self, taxa):
        self.saldo += self.saldo * taxa

class ContaPoupanca(Conta):
    def __init__(self, numero, titular, saldo=0):
        self.numero = numero
        self.titular = titular
        self.saldo = saldo

    def atualiza(self, taxa):
        self.saldo += self.saldo * taxa


if __name__ == '__main__':
    ci = ContaInvestimento('123-6', 'Maria', 1000)
    ci.deposita(1000.0)
    ci.atualiza(0.01)
    print(ci.saldo)

if __name__ == '__main__':

    cc = ContaCorrente('123-4', 'João', 1000.0)
    cp = ContaPoupanca('123-5', 'José', 1000.0)
    ci = ContaInvestimento('123-6', 'Maria', 1000.0)


    cc.atualiza(0.01)
    cp.atualiza(0.01)
    ci.atualiza(0.01)


    print("Saldo Conta Corrente:", cc.saldo)
    print("Saldo Conta Poupança:", cp.saldo)
    print("Saldo Conta Investimento:", ci.saldo)
