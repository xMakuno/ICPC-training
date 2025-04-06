t:int=int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    lc = 0
    ic = 0
    tc = 0
    for c in s:
        if c == "L":
            lc+=1
        elif c == "I":
            ic+=1
        else:
            tc+=1
    big = max(lc,ic,tc)
    if 2*n < lc+ic+tc-big:
        print(-1)
    elif lc+ic+tc == big:
        print(-1)
    else:
        idx = 0
        for i in range(n-1):
            if s[i]!=s[i+1]:
                idx = i