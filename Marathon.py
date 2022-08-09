def solve():
    lis = list(map(int, input().split()))
    a = lis[0]
    cnt = 0
   # print(lis[0])
    for i in range(0,len(lis)):
        if(a < lis[i]):
            cnt += 1
    print(cnt)


t = int(input())
for i in range(t):
    solve()
