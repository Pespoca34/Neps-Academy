lista = [int(input()) for i in range(10)]

for i in range(10):
    for j in range(9-i):
        if lista[j] > lista[j+1]:
            lista[j], lista[j+1] = lista[j+1], lista[j]

print(" ".join(map(str, lista)))
print(" ".join(map(str, lista[::-1])))


