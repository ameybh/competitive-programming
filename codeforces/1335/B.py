t = int(input())
for i in range(t):
    s = ""
    n,a,b = map(int,input().split())
    while(len(s)<n):
        newS = ""
        for j in range(b):
            newS += chr(ord('a') + j)
        s += newS
    print(s[:n])