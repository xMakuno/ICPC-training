t = int(input())
while t:
    t-=1
    n,k,p=map(int, input().split())
    k = abs(k)
    if k % p == 0:
        if k // p > n:
            print(-1)
        else:
            print(k//p)
    else:
        if k//p >= n:
            print(-1)
        else:
            print(k//p +1)
