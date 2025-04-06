t = int(input())
while t:
    t-=1
    n = int(input())
    first = list(map(int, input()))
    last = list(map(int, input()))
    ans = 0
    for i in range(n):
        if (last[i]&1):
            if not first[i]:
                ans+=1
            else:
                l = i-1
                r = i+1
                # print(f'l: {l} r: {r}')
                if (l>=0 and first[l]):
                    first[l] = 0
                    ans+=1
                elif (r<=n-1 and first[r]):
                    first[r] = 0
                    ans+=1
    print(ans)
        