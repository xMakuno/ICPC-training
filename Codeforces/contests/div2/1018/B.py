t = int(input())

while t:
    t-=1
    n,k=map(int, input().split())
    l = list(map(int, input().split()))
    r = list(map(int, input().split()))
    ans = 0
    total = 0
    thing = []
    for i in range(n):
        s= l[i]+r[i]
        total+= s
        thing.append(s)
    print(f"Left gloves: {sum(l)}")
    print(f"Right gloves: {sum(r)}")
    print(*thing)
    for i in range(k):
        ans+=l[n-1-i]+r[n-1-i]
    print(total)
    # print(ans)