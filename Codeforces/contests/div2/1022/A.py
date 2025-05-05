def su(n):
    return 1 + (4*(n//2)*((n//2)-1)//2 + n)//2

t = int(input())
while t:
    t-=1
    n = int(input())
    ans = 0
    if n & 1:
        ans=su(n-1)+(n-1)//2
    else:
        ans=su(n)
    print(ans) 