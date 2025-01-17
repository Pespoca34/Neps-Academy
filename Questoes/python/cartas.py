a,b = map(int, input().split())

lst1 = list(map(int, input().split()))

lst2 = list(map(int, input().split()))

set1 = set(lst1)
set2 = set(lst2)

dif1 = set1 - set2
dif2 = set2 - set1

trocas = min(len(dif1), len(dif2))

print(trocas)
