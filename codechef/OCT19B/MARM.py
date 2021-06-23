# MARM.py

t = int(input())
while t:

	n,k = map(int,input().split())
	arr = [int(x) for x in input().split()]

	for i in range(k):
# 		print("i:", i)
		a=arr[i%n]
		b=arr[n-(i%n)-1]
		arr[i%n] = a ^ b
	# print(arr)
	for x in arr:
		print(x,end=" ")
	print("\n")
	t-=1