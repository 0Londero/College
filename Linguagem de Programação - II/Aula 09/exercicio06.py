class ValorAbaixoException(Exception):
    pass

class ValorAltoException(Exception):
    pass

class ValorMuitoAltoException(Exception):
    pass

def analisar_valor():
    try:
        valor = input("Digite um valor: ")
        if not valor.isdigit():
            raise ValueError("O valor deve ser um número inteiro.")

        valor = int(valor)

        if valor <= 0:
            raise ValorAbaixoException("ValorAbaixoException: O valor é menor ou igual a zero.")
        elif 100 < valor < 1000:
            raise ValorAltoException("ValorAltoException: O valor está entre 100 e 1000 (exclusive).")
        elif valor >= 1000:
            raise ValorMuitoAltoException("ValorMuitoAltoException: O valor é maior ou igual a 1000.")

        print("O valor está dentro da faixa desejada:", valor)

    except ValueError as ve:
        print("Erro:", ve)
    except ValorAbaixoException as vae:
        print("Erro:", vae)
    except ValorAltoException as vae:
        print("Erro:", vae)
    except ValorMuitoAltoException as vmae:
        print("Erro:", vmae)

if __name__ == "__main__":
    analisar_valor()
