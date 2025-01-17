num = int(input())
consultas = list(map(int, input().split()))

estoque = set()

tacos_fabricados = 0

for taco in consultas:
    if taco in estoque:
        estoque.remove(0)
    else:
        tacos_fabricados += 2
        estoque.add(taco)

print(tacos_fabricados)
