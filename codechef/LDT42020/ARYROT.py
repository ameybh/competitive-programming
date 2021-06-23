t = int(input())
while t:
	n,q = map(int,input().split())
	arr = list(map(int,input().split()))
	q = n-q
	for i in range(n):
		print(arr[(i+q)%n],end=" ")
	print("\n",end="")
	t-=1
