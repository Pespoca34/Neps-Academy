quantidade = int(input())

pilha = []

for _ in range(quantidade):
    x = int(input())
    if x == 0:
        if pilha:
            pilha.pop()
    else:
        pilha.append(x)

print(sum(pilha))
