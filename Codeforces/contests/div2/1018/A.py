t = int(input())
print(t)
while t:
    t-=1
    n = int(input())
    s = input()
    p = [str(i) for i in range(1,n+1)]
    l = 0
    r = n-1
    # print(len(p))
    ans = ""
    # last = True
    for i in s[::-1]:
        # print(ans)
        if i == "<":
            ans+=p[l]
            l+=1
        else:
            ans+=p[r]
            r-=1
    # print("debug", l, r)
    print(s)
    print(*list(p[l] + ans[::-1]))