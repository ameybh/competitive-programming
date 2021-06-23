t = int(input())

while t:

	n = int(input())
	data = []
	for i in range(n):
		x = int(input())
		data.append(x)
	mx = -1
	for i in range(n):
		if data[i] > mx:
			mx = data[i]
	print(mx)
	
	t-=1