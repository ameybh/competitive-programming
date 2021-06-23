data = {}
n1,n2,n3 = map(int,input().split())
for i in range(n1+n2+n3):
	x = int(input())
	if x in data:
		data[x]+=1;
	else:
		data[x] = 1;


output = []

for key,val in data.items():
	if val>=2:
		output.append(key)

output.sort()

print(len(output))
for i in range(len(output)):
	print(output[i])
	
