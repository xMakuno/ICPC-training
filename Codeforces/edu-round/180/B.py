t=int(input())
while t:
    t-=1
    n=int(input())
    arr = list(map(int, input().split()))
    last = arr[0]
    f = False
    op = False
    for i in range(1,n):
        curr = arr[i]
        if abs(curr - last) <= 1:
            # print(curr - last)
            f = True
        else:
            li = i-2
            ri = i+1
            lo = min(curr, last)-1
            hi = max(curr,last)+1
            valid = lambda x: (x >= 0 and x < n)
            between = lambda x: ( x>=lo and x <= hi)
            # print(f"{lo=} {hi=}")
            # print(f"{ri=}")     
            if valid(ri):
                if between(arr[ri]):
                    op=True
            if valid(li):
                if between(arr[li]):
                    op=True
        last = curr

    # print(f)
    if f:
        print(0)
    elif op:
        print(1)
    else:
        print(-1)