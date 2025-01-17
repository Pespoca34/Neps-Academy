vezes = int(input())

dados = [int(input()) for _ in range(vezes)]
dicionario = {}


for numero in dados:
    if numero in dicionario:
        dicionario[numero] += 1
    else:
        dicionario[numero] = 1

#maior = max(dicionario.values())
maior = 0
for tamanho in dicionario.values():
    if tamanho > maior:
        maior = tamanho

numeros = []
for i in dicionario:
    if dicionario[i] == maior:
        numeros.append(i)
    else:
        continue

numeros.sort()
print(" ".join(map(str,numeros)))

