quantidade = int(input())

numeros = list(map(int, input().split()))
soma = 0

for i in range(quantidade):
    soma += numeros[i]

valor = soma / quantidade

print(f"{valor:.2f}")
