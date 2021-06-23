# your code goes here

def solve(x,y):
	A = int(x,2)
	B = int(y,2)
	c=0
	while B>0:
		U = A ^ B
		V = A & B
		A = U
		B = 2*V
		c+=1
	return c
	
t = int(input())
while(t):
	
	A = input()
	B = input()
	print(solve(A,B))
	
	t-=1