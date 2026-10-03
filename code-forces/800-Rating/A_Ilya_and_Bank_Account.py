s = input()

a = s
b = s

a = s[:-1]
i = len(s) - 2
b = s[:i] + s[i+1:]

x = int(s)
y = int(a)
z = int(b)

ans = max(y , z, x)
print(ans)