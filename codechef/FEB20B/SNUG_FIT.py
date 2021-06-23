t = int(input())

while t:
	
	n = int(input())
	a = [int(x) for x in input().split()]
	a.sort()
	b = [int(x) for x in input().split()]
	b.sort()
	# print(a)
	# print(b)
	s = 0
	for i in range(n):s+= min(a[i],b[i])
	print(s)
	
	t-=1
