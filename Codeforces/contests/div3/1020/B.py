t=int(input())
while t:
    t-=1
    n,x = map(int, input().split())
    ans = []
    for i in range(n):
        if i != x:
            ans.append(i)
    if x <= n-1:
        ans.append(x)
    print(*ans)