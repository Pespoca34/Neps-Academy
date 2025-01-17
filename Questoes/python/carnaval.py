valores = list(map(float, input().split()))

valores.sort()

soma = valores[1] + valores[2] + valores[3]

print(round(soma, 1))
