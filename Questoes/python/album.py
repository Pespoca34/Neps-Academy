total:int = int(input())

quantidade:int = int(input())

figurinhas = [int(input()) for _ in range(quantidade)]

espacos = set()

for i in range(quantidade):
    if figurinhas[i] not in espacos:
        espacos.add(figurinhas[i])
    elif figurinhas[i] in espacos:
        pass


dif = total - len(espacos)

print(dif)

