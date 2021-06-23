# 1220A.py
def count(s,x):
	count = 0
	for c in s:
		if c==x:
			count+=1
	return count

n = int(input())
s = input()

for i in range(count(s,'n')):
	print(1, end=" ")

for i in range (count(s,'z')):
	print(0, end=" ")
print("\n")