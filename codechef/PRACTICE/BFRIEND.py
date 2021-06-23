from math import floor

t = int(input())
while(t):
	n,a,b,c = map(int,input().split())
	floors = [int(x) for x in input().split()]
	mi = float('inf')
	
	path = 0
	for i in range(len(floors)):
		# mi = min(mi, )
		s1 = abs(floors[i]-b)
		s2 = abs(floors[i]-a)
		x = s1+s2+c
		# print(s1,s2,c,x)
		if(x<mi):
			path=floors[i]
			mi = x
	
	print(mi)
	
	t-=1
