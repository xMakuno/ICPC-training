t=int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    last = int(s[0])
    f = [0,0]
    for i in range(n):
        curr = int(s[i])
        if curr == last:
            continue
        else:
            if (last == 0 and f[1] > 0) or last == 1:
                f[last]+=1
        last = curr
    print("groups ",last, curr)
    if s[-1] == "0":
        f[0]+=1
    print(f[0],f[1])