# cook your dish here
t = int(input())
while t:
	n = int(input())
	arr = [int(x) for x in input().split()]
	maxCount = 0
	for i in range(1,n):
		count = 0
		for j in range(i):
			if(arr[j]%arr[i] == 0):
				count+=1
		if(count>maxCount):
			maxCount = count
	print(maxCount)
		# end of loop
	t-=1