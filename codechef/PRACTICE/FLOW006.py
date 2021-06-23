testcases = int(input())

for i in range(0,testcases):
	n = int(input())
	s = 0
	while(n>0):
		s = s + (n)
		n = n//10
	print(s)
