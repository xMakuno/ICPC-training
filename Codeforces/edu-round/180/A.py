t=int(input())
while t:
    t-=1
    a,x,y=map(int,input().split())
    if x > y:
        x,y=y,x
    if a >=x and a <= y:
        print("NO")
    else:
        print("YES")