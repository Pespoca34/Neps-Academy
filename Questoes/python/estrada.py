num = int(input())
letras = list(input())

contador = 0
for i in letras:
    if i == 'A':
        contador += 1
    elif i == 'P' or i == 'C': 
        contador += 2

print(contador)
