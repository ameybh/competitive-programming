import math
t=int(input())
for i in range(t):
	n=int(input())
	a=list(map(int,input().split()))
	m=min(a)
	for i in range(n):
		a[i] -= m
	div = True
	for i in range(n):
		#  print(a[i],end=" ")
		div &= a[i]%2 == 0
	if (div):
		print("YES")
	else:
		print("NO")