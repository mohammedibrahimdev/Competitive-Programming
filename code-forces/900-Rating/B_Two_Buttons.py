n  , m= map(int, input().split())

ans = 0
while m > n:
    if m%2 == 0:
        m //= 2
    else:
        m += 1

    ans += 1

ans += n - m
print(ans)