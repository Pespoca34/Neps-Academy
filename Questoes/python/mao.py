#pegar todos os inputs
inputs = [int(input()) for i in range(4)]

#item[0] = doces disponiveis
#item[1] = doces necessarios para evoluir a primeira vez
#item[2] = doces necessarios para a segunda evolução
#item[3] = doces necessarios para a terceira evolução

a,b,c,d = inputs[0],inputs[1],inputs[2],inputs[3]
total = b + c + d
sum1 = b + c
sum2 = c + d
sum3 = b + d

if a >= total:
    print('3')
elif a >= sum1 or a >= sum2 or a >= sum3:
    print('2')
elif a >= b or a >= c or a >= d:
    print('1')
else:
    print('0')

