# cook your dish here
from math import floor

t = int(input())
while(t):
	
	n = int(input())
	profit = 0
	for i in range(n):
		s,p,v = map(int,input().split())
		profit = max(profit,floor(p/(s+1))*v)
	print(profit)
	t-=1
