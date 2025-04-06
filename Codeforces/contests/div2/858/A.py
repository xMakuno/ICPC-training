t = int(input())
while t:
    t-=1
    a, b, c, d = map(int, input().split())
    if d >= b and d-b+a >= c:
        print(d-b+abs(d-b+a-c))
    else:
        print(-1)