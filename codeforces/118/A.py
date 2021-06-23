vowels = ['a','e','i','o','u','y']

s = input().lower()
ans = ''
for x in s:
	if x not in vowels:
		ans += '.'+x
print(ans)