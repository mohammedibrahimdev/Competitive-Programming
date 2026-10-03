test = int(input())

for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))

    if len(set(arr)) == len(arr):
        print("YES")
    else:
        print("NO")