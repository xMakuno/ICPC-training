t = int(input())
while t:
    t-=1
    n = input()
    ans=0
    f=False
    for d in n[::-1]:
        # print(d)
        if int(d) > 0:
            f = True
        elif f:
            ans+=1
    print(len(n)-ans-1)