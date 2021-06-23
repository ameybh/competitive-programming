t = int(input())

while t:
	
	n = int(input())
	nums = [int(x) for x in input().split()]
	nums.sort()
	mx = 0
	for i in range(len(nums)):
		if i==0:
			if nums[i+1]-nums[i] > mx:
				mx = nums[i+1]-nums[i]
		elif i==n-1:
			if nums[i]-nums[i-1] > mx:
				mx = nums[i]-nums[i-1]
		else:
			mxpeace = min(nums[i]-nums[i-1],nums[i+1]-nums[i])
			if(mxpeace>mx):
				mx=mxpeace
	
	print(mx)
			
	
	t-=1
