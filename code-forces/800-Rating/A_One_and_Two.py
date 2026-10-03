testcase = int(input())

for _ in range(testcase):
    size = int(input())
    arr = list(map(int , input().split()))

    count_2s = 0
    for number in arr:
        if number == 2:
            count_2s +=  1

    if count_2s%2 != 0:
        print(-1)
        continue

    half = count_2s//2
    count = 0
    ans = -1

    for index in range(size):
        if arr[index] == 2:
            count += 1

        if count == half:
            ans = index+1
            break
    print(ans)