nome = input()
salarioFixo = float(input())
vendasMes = float(input())

calculoSalario = salarioFixo + (vendasMes * 0.15)

print("TOTAL = R$ {:.2f}".format(calculoSalario))