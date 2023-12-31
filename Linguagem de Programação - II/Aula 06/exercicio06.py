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


class Empregado(Pessoa):
    def __init__(self, nome, endereco, salarioBase, mesesTrabalhados):
        super().__init__(nome, endereco)
        self.salarioBase = salarioBase
        self.mesesTrabalhados = mesesTrabalhados

    def get_salarioBase(self):
        return self.salarioBase

    def set_salarioBase(self, salarioBase):
        self.salarioBase = salarioBase

    def get_mesesTrabalhados(self):
        return self.mesesTrabalhados

    def set_mesesTrabalhados(self, mesesTrabalhados):
        self.mesesTrabalhados = mesesTrabalhados

    def calcularSalario(self):
        return self.salarioBase * self.mesesTrabalhados


class Operario(Empregado):
    def __init__(self, nome, endereco, salarioBase, mesesTrabalhados, valorProducao, comissao):
        super().__init__(nome, endereco, salarioBase, mesesTrabalhados)
        self.valorProducao = valorProducao
        self.comissao = comissao

    def get_valorProducao(self):
        return self.valorProducao

    def set_valorProducao(self, valorProducao):
        self.valorProducao = valorProducao

    def get_comissao(self):
        return self.comissao

    def set_comissao(self, comissao):
        self.comissao = comissao

    def calcularSalario(self):
        salario_empregado = super().calcularSalario()
        return salario_empregado + self.comissao


# Programa de teste
operario1 = Operario("Operario A", "Rua V", 3000, 10, 50000, 1000)

print("Nome do Operario:", operario1.get_nome())
print("Endereço do Operario:", operario1.get_endereco())
print("Salário Base do Operario:", operario1.get_salarioBase())
print("Meses Trabalhados do Operario:", operario1.get_mesesTrabalhados())
print("Valor de Produção do Operario:", operario1.get_valorProducao())
print("Comissão do Operario:", operario1.get_comissao())
print("Salário do Operario:", operario1.calcularSalario())
