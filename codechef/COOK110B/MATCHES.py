# cook your dish here
data  = [6,2,5,5,4,5,6,3,7,6]

t = int(input())

while(t):

	nums = [int(x) for x in input().split(" ")]
	nSum = nums[0] + nums[1]
	# print(nums, nSum)
	matches = 0
	# for i in range(len(str(nSum))):
	# 	matches+=data[int(nSum[i])]
	# 	print("i: "+str(i)+"Matches: "+str(matches))
	for x in str(nSum):
		# print("x: "+str(x))
		matches+=data[int(x)]
	# print("Sum: "+str(nSum))
	# print(matches)
	print(matches)
	t-=1