t = int(input())

while t:
	
	n,k = map(int, input().split())
	a = [int(x) for x in input().split()]
	
	b = [x%k for x in a]
	d = [k-x for x in b]
	# b is how much you need to remove to satisfy
	# d is how much you need to add to satify
	# print(b)
	# print(d)
	
	# choose c
	currCoins = 0
	c = 1
	printed = False
	for i in range(n):
		currCoins+=b[i]
		rest = sum(d[i+1:n])
		# print(currCoins, rest, c)
		c = i+1
		if(currCoins>rest):			
			print(currCoins-rest)
			printed = True
			break
	# print(c)
	if(not printed): print(0)
	
	t-=1
