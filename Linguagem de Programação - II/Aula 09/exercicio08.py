try:
    numero1 = int(input("Digite o primeiro número inteiro: "))
    numero2 = int(input("Digite o segundo número inteiro: "))

    resultado = numero1 + numero2

    if resultado > 50:
        raise Exception("Soma maior que 50")

    print("Resultado da soma:", resultado)

except Exception as e:
    print("Erro:", e)
