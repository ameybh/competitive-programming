# 1234B.py

n,k = map(int,input().split())
ids = [int(x) for x in input().split()]
q = []
for i in range(n):
	if not (ids[i] in q):
		if(len(q)>=k):
			q.pop()
		q.insert(0,ids[i])
print(len(q))
for x in q:
	print(x,end=" ")