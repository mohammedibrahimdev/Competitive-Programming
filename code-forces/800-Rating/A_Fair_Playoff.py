testcase = int(input())

for _ in range(testcase):
    arr = list(map(int , input().split()))

    finalist = [max(arr[1] , arr[0]) , max(arr[2] , arr[3])]

    arr.sort()
    finalist.sort()
    if finalist == [arr[2] , arr[3]]:
        print("YES")
    else:
        print("NO")