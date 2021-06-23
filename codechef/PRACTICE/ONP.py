# cook your dish here
t = int(input())
ops = ['+','-','*','/','^']

while(t):

	exp = list(input())
	temp = []
	exps = []
	for x in exp:
		if x=='(' or x.isalpha():
			exps.append(x)
		elif x in ops:
			temp.append(x)
		elif x == ')':
			exps.append(temp.pop())
	
	for x in exps:
		if not (x=='(' or x==')'):
			print(x,end="")
	print('')

	t-=1
	
	
# 	print('\n')