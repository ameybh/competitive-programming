n = int(input())
for i in range(n):
	print(''.join(['W' if (i + j) % 2 == 0 else 'B' for j in range(n)]))