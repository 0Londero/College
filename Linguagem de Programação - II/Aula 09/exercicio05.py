def divide_valores():
    try:
        valor1 = float(input("Digite o primeiro valor: "))
        valor2 = float(input("Digite o segundo valor: "))

        if valor2 <= 0:
            raise ValueError("O segundo valor deve ser maior que zero.")

        resultado = valor1 / valor2
        print("Resultado da divisão:", resultado)

    except ValueError as erro:
        print("Erro:", erro)

if __name__ == "__main__":
    divide_valores()
