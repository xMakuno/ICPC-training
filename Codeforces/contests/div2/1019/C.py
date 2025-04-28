t = int(input())
while t:
    t-=1
    n,k = map(int, input().split())
    arr = list(map(int, input().split()))
    b = list(map(lambda x: int(x<=k), arr))
    pref = [0]*(n+1)
    for i in range(1,n+1):
        pref[i] = pref[i-1]+b[i-1]