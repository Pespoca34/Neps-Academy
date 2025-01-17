valores = list(map(int, input().split()))

"""
valor 0 = numero competidores
valor 1 = quantidade de folhas
valor 2 = quantidade de folhas dadas
"""

folhas = valores[0] * valores[2]

if folhas >= valores[1]:
    print('N')
else:
    print('S')
