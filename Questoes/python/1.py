num = int(input())

if num == 0:
    print('N')
else:
    binario = []
    while num != 1:
        binario.append(num % 2)
        num = num // 2
        if num == 1:
            binario.append(num)

    bol = True
    for aux in binario:
        if aux == 0:
            bol = False
            break
        else:
            continue

    if bol == True:
        print('S')
    else:
        print('N')
