# cook your dish here
def getTwoPow(n):
	for i in range(len(menu)-1,-1,-1):
		if(menu[i]<=n):
			return menu[i]


menu = [2**i for i in range(0,12)]
#print(menu)

t = int(input())
while(t):
	n = int(input())
	x = getTwoPow(n)
	buffer = 0
	count = 0
	while(buffer!=n):
		count+=1
		buffer+=x
		diff = n-buffer
		x = getTwoPow(diff)
	print(count)
	t-=1