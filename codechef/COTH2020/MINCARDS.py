n = int(input())
s = input()
ans = 0
for i in range(len(s)):
	if (i+1 < n and s[i+1] == s[i]):
		ans+=1
		i+=1
	i-=1
print(ans)
		
