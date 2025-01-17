num = int(input())
if num == 0:
    print('0')
else:
    array = []

    while num != 1:
        array.append(num % 2)
        num = num // 2
        if num == 1:
            array.append(num)

    array.reverse()
    print("".join(map(str,array)))

