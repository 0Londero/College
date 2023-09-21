class Pessoa:
    def __init__(self, nome, endereco):
        self.nome = nome
        self.endereco = endereco

    def get_nome(self):
        return self.nome

    def set_nome(self, nome):
        self.nome = nome

    def get_endereco(self):
        return self.endereco

    def set_endereco(self, endereco):
        self.endereco = endereco


class Cliente(Pessoa):
    def __init__(self, nome, endereco, credimaximo, valorEmDivida):
        super().__init__(nome, endereco)
        self.credimaximo = credimaximo
        self.valorEmDivida = valorEmDivida

    def get_credimaximo(self):
        return self.credimaximo

    def set_credimaximo(self, credimaximo):
        self.credimaximo = credimaximo

    def get_valorEmDivida(self):
        return self.valorEmDivida

    def set_valorEmDivida(self, valorEmDivida):
        self.valorEmDivida = valorEmDivida

    def obterSaldo(self):
        return self.credimaximo - self.valorEmDivida


# Programa de teste
cliente1 = Cliente("Cliente A", "Rua Z", 5000, 2000)

print("Nome do Cliente:", cliente1.get_nome())
print("Endereço do Cliente:", cliente1.get_endereco())
print("Crédito Máximo do Cliente:", cliente1.get_credimaximo())
print("Valor em Dívida do Cliente:", cliente1.get_valorEmDivida())
print("Saldo do Cliente:", cliente1.obterSaldo())
