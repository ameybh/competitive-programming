# your code goes here
t  = int(input())
while t:
	
	n,m = map(int,input().split())
	n=str(int(str(n)[::-1]))
	m=str(int(str(m)[::-1]))
	
	print(int(str(int(n)+int(m))[::-1] ))
	
	
	t-=1
