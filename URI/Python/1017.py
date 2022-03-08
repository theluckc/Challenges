tempoViagem = int(input())
velocidadeMedia = int(input())

combustivelNecessario = tempoViagem * velocidadeMedia / 12

print("{:.3f}".format(combustivelNecessario))