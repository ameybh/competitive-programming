noOps = int(input())
ops = list(input().split(" "))
ops = [int(x) for x in ops]
easy, hard = 0,0
#print(ops)
for op in ops:
    if op == 0:
        easy+=1
    else:
        hard+=1

if hard >0:
    print('HARD')
else:
    print('EASY')

#print(str(easy)+" "+str(hard))