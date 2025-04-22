t=int(input())
while t:
    t-=1
    n,m,k=map(int, input().split())
    if m < n - 1 or m > n*(n-1)//2:
        print("NO")
    elif n == 1:
        if k > 1:
            print("YES")
        else:
            print("NO")
    elif m < n*(n-1)//2:
        if k > 3:
            print("YES")
        else:
            print("NO")
    elif k>2:
        print("YES")
    else:
        print("NO")
    