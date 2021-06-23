t = int(input())
while t:
	n = int(input())
	mx = float('inf')
	nums = [int(x) for x in input().split()]
	nums.sort()
	print(nums[0]+nums[1])

	t-=1