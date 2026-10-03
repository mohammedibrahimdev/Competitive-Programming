Loop = int(input())

for i in range(Loop):
    arr = input()
    len_arr = len(arr)

    if len_arr % 2 != 0:
        print("NO")
        continue

    mid = len_arr // 2

    target = arr[:mid]

    if arr[mid:] == target:
        print("YES")
    else:
        print("NO")