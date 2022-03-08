id = int(input())
hrsTrabalhadas = int(input())
salarioPerhr = float(input())

calculoSalario = salarioPerhr * hrsTrabalhadas

print("NUMBER =", id)
print("SALARY = U$ {:.2f}".format(calculoSalario))