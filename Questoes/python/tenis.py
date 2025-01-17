valores = [str(input().upper()) for _ in range(6)]

#5 ou 6 jogos, gp1
# 3 ou 4, gp2
# 1 ou 2, gp3
# 0, não serão convocados
vitorias = 0

for i in valores:
    if i == 'V':
        vitorias += 1

if vitorias == 5 or vitorias == 6:
    print(1)
elif vitorias == 3 or vitorias == 4:
    print(2)
elif vitorias == 2 or vitorias == 1:
    print(3)
else:
    print(-1)
