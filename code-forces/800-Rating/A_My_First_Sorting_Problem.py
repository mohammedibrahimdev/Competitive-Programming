test = int(input())

for _ in range(test):
    a , b = map(int , input().split())
    print(min(a, b), max(a ,b))