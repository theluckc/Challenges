def aVeryBigSum(vet):
    cont = 0
    for i in range(len(vet)):
        cont = vet[i] + cont
    return cont    
    

ar_count = int(input())
ar = list(map(int, input().rstrip().split()))

print(aVeryBigSum(ar))