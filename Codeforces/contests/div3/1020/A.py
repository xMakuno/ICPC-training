t=int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    base = s.count("1")
    ans = 0
    for i in range(n):
        if s[i] == "1":
            ans+=base-1
        else:
            ans+=base+1
    print(ans)
