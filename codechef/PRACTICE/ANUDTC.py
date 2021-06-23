t = int(input())

while t:
	
	n = int(input())
	a="y"
	b="y"
	c="y"
	
	if(360%n == 0): a="y"
	else: a="n"
	
	if(n<=360): b="y"
	else: b="n"
	
	if(n*(n+1)/2 <= 360): c="y"
	else: c = "n"
	
	print(a,b,c)
	
	t-=1
