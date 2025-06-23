t=int(input())
while t:
    t-=1
    k,a,b,x,y=map(int, input().split())
    if x > y:
        a,b = b,a
        x,y = y,x
    lo = 0
    hi = k
    while hi - lo > 1:
        mid = (hi-lo)//2
        print(mid*x)
        if mid*x >= a:
            lo = mid + 1
        else:
            hi = mid
    print(lo, hi)