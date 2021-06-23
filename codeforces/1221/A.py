def query(arr):
	validElems = list()
	# remove elements larger than 2048
	for x in arr:
		if x<=2048:
			validElems.append(x)
	if(sum(validElems)>=2048):
		return("YES")
	return ("NO")
	
t = int(input())
while(t):
	n = int(input())
	nums = [int(x) for x in input().split(" ")]
	print(query(nums))
	t-=1