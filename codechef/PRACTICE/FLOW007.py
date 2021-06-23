def reverse(s):
    if len(s) == 0:
        return s
    else:
        return reverse(s[1:]) + s[0]

t = int(input())

while(t):
    n = input()
    print(int(reverse(n)))
    t-=1