cod1, num1, preco1 = input().split()
cod2, num2, preco2 = input().split()
codPeca1 = int(cod1)
codPeca2 = int(cod2)
numPeca1 = int(num1)
numPeca2 = int(num2)
valorPeca1 = float(preco1)
valorPeca2 = float(preco2)

total = (numPeca1 * valorPeca1) + (numPeca2 * valorPeca2)

print("VALOR A PAGAR: R$ %.2f" %total)