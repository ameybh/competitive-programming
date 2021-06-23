def s(n):
	return int(n*(n+1)*(2*n+1)/6)
a,b = map(int, input().split())
print(s(b)-s(a-1))
