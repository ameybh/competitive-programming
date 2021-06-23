def solve():
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))
	ans = 0
	for i in range(3):
		if (b[i] < a[i]):
			print("-1")
			return
		ans += b[i] - a[i]
	print(ans)
	

t = int(input())
while t:
	solve()
	t-=1
	
