t = int(input())

while t:
	p,q,c,r = map(int,input().split())
	
	a=min(p,q)
	b=max(p,q)
	ti = 0
	if(a==b):
		ti = 0
	elif(c<a):
		if(r+c<a):
			ti = b - a
		elif(r+c>b):
			ti = 0
		else:
			ti = b - r - c
	elif(c>b):
		if(c-r>b):
			ti = b - a
		elif(c-r>a):
			ti = c -r - a
		else:
			ti = 0
	else:
		if(2*r > b-a):
			ti = 0
		else:
			ti = b-a-2*r
	print(ti)
	t-=1