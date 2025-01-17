coords = list(map(int, input().split()))
a,b = coords[0], coords[1]

if a > 432 or a < 0:
    print('fora')
elif b > 468 or b < 0:
    print('fora')
else:
    print('dentro')
