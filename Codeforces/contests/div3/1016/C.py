def isP(p):
    if p == 1 or p == 2:
        return not bool(p&1)
    if not (p&1):
        return False
    i = 3
    while i*i <= p:
        if p % i == 0:
            return False
        i+=2
    return True 

t = int(input())
while t:
    t-=1
    x, k = map(int, input().split())
    tens = 0
    for i in range(k):
        tens += (10**i)
    # print(tens)
    if k > 1 and x > 1:
        print("NO")
    elif k == 1:
        s = "YES" if isP(x) else "NO"
        print(s)
    elif x == 1:
        s = "YES" if isP(int(str(x)*k)) else "NO"
        print(s)
        