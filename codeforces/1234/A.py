# 1234A.py
from math import ceil
q = int(input())
while(q):
	n = int(input())
	a = [int(x) for x in input().split()]

	print(ceil(sum(a)/n))

	# a.sort()
	# originalSum = sum(a)
	# newSum = 0
	# i=0
	# while(newSum<originalSum):
	# 	newSum = a[i]*n
	# 	i+=1
	# print(a[i-1],end="\n")

	q-=1