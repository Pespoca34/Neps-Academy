num = int(input())
numeros = list(map(int, input().split()))

menor = min(numeros)

if num > menor:
    print('N')
else:
    print('S')

