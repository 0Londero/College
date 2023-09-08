tempo_de_duracao = int(input("Digite o tempo de duração do evento em segundos: "))

horas = tempo_de_duracao / 3600
minutos = tempo_de_duracao / 60
segundos = tempo_de_duracao

'''arredondamento'''
horas = round (horas, 2)
minutos = round (minutos, 2)

print (f"O evento durou {horas} horas; {minutos} minutos e {segundos} segundos")