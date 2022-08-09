for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())
    print(a[sum(list(map(int, input().split()))) % n])
    