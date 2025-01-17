megabytes = int(input())
meses = int(input())

megas_usados = [int(input()) for _ in range(meses)]

sobrando = 0

for i in megas_usados:
    sobrando += megabytes
    sobrando -= i

sobrando += megabytes

print(sobrando)
