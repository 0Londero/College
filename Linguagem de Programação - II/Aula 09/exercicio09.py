class ContaExceção(Exception):
    def __init__(self, mensagem):
        super().__init__(mensagem)


class Conta:
    def __init__(self):
        self.saldo = 0
        self.limite = 0

    def deposita(self, valor):
        self.saldo += valor

    def setLimite(self, limite):
        self.limite = limite

    def saca(self, valor):
        if valor > self.saldo + self.limite:
            raise ContaExceção("Saldo insuficiente para saque.")
        else:
            self.saldo -= valor


# Código "Caixa" com tratamento de exceção
try:
    minhaConta = Conta()
    minhaConta.deposita(100)
    minhaConta.setLimite(100)
    minhaConta.saca(1000)
except ContaExceção as ce:
    print("Erro:", ce)
