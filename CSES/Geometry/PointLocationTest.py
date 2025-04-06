t = int(input())
while t:
    t-=1
    x1, y1, x2, y2, p1, p2 = map(int, input().split())
    m1 = (y2-y1)/(x2-x1)
    f = lambda x : m1*x -m1*x1 +y1
    if f(p1) == p2:
        print("TOUCH")
    elif f(p1) < p2:
        print("LEFT")
    else:
        print("RIGHT")
