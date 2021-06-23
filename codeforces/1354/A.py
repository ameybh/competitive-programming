import math
t = int(input())
for i in range(t):
    a,b,c,d = map(int,input().split())
    if (a <= b):
        print(b)
        continue
    
    if (c-d <= 0):
        print(-1)
        continue
    
    
    ans = b + math.ceil((a-b)/(c-d))*(c)
    print(ans)