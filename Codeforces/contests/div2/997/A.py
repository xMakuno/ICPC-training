t=int(input())
while t:
    t-=1
    n,m=map(int,input().split())
    lx = 0
    ly = 0
    ans = 4*m*n
    px = 0
    py = 0
    for i in range(n):
        x,y=map(int, input().split())
        lx=lx+m
        ly=ly+m
        if i != 0:
            # print("first",px-lx)
            # print("second",py-ly)
            ans = ans-2*(abs(px-x))-2*(abs(py-y))
        px = lx
        py = ly
        print(ans)