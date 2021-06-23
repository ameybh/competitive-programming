t = int(input())

while t:

	n = int(input())
	nums = [int(x) for x in input().split()]
	mi = min(nums)
	c=0
	for i in range(n):
		c+=nums[i]-mi;
	print(c)

	t-=1