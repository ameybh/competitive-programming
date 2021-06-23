t = int(input())
while t:
	n = int(input())
	a = list(map(int,input().split()))
	s = sum(a)
	if (s/n == s//n):
		print("Yes")
	else:
		print("No")
	t-=1
