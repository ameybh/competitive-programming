# your code goes here
t = int(input())
while t:
	
	n = int(input())
	nums = [int(x) for x in input().split()]
	
	even,odd = 0,0
	for i in range(n):
		if nums[i] % 2 != 0:
			odd+=1
		else:
			even+=1
	print(odd*even)
	
	t-=1