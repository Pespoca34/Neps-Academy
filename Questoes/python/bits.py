num = int(input())

array = []

while num != 1:
    array.append(num % 2)
    num = num // 2
    if num == 1:
        array.append(num)

array.reverse()

contador = sum(1 for i in array if i == 1)

print(contador)

