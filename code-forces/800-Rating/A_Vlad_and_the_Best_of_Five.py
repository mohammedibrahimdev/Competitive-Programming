from collections import Counter
n = int(input())

for i in range(n):
    s = input()

    freq = Counter(s)
    ch = freq.most_common(1)[0][0]
    print(ch)
