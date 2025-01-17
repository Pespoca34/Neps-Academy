n:int = int(input())

aux = 'N'

for i in range(2, int(n**0.5) + 1):
    if n % i == 0:
        fodase = n // i
        
        if fodase > 1:
            aux = 'S'
            break

print(aux)
