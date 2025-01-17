ataque1 = int(input())
defesa1 = int(input())  
ataque2 = int(input())
defesa2 = int(input()) 

desmaia1 = defesa1 != ataque2  
desmaia2 = defesa2 != ataque1 

if not desmaia1 and desmaia2:
    print(1) 
elif not desmaia2 and desmaia1:
    print(2)  
else:
    print(-1)  

