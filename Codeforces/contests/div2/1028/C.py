def gcd(a,b):
    if b == 0:
        return a
    else:
        return gcd(b,a % b)

t = int(input())
while t:
    t-=1
    n =int(input())
    l = list(map(int, input().split()))
    g = l[0]
    for i in range(1,n):
        g = gcd(g,l[i])
    
    cnt = 0
    for i in range(n):
        if g == l[i]:
            cnt+=1

    if g == 1:
        print(n-cnt)
    else:
        print(n-cnt+1)