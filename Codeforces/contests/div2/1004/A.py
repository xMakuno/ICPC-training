t=int(input())
while t:
    t-=1
    x,y=map(int, input().split())
    if x == y+1:
        print("YES")
    else:
        print("puta")