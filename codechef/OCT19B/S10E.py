# def max(arr,x):
# 	maxs = 0
# 	maxIndex = -1
# 	for i in range(arr):


t = int(input())
# t=1

while(t):

	n = int(input())
	nums = [int(x) for x in input().split()]
	# nums = [random.randint(350,750) for x in range(10)]
	prices = [1000 for x in range(5)] + nums
	caught = []
	count = 0
	# print(prices)
	for i in range(5,len(prices)):
		subPrices = prices[i-5:i]
		if(prices[i] < min(subPrices)):
			count+=1		
	print(count)
	t-=1