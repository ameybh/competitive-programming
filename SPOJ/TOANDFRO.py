x = int(input())
while x != 0:
	s = input()
	data = [] 
	rows = int(len(s) / x)
	# print(rows)
	
	for i in range(0, rows, 2):
		data.append(s[i*x:(i+1)*x])
		data.append(s[(i+1)*x:(i+2)*x][::-1])
	
	for i in range(x):
		for j in range(rows):
			print(data[j][i], end="")
	print("\n", end="")
	x = int(input())
		
		
