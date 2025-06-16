t = int(input())
while t:
    t-=1
    a,b,c,d=map(int, input().split())
    g = min(a,c)
    f = min(b,d)
    if g < f:
        print("Flower")
    else:
        print("Gellyfish")