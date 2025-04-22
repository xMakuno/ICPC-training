t = int(input())
while t:
    t-=1
    a,b,c = map(int, input().split())
    s = a + b + c
    if s - a >= 10 or s - b >= 10 or s - c >= 10:
        print("YES")
    else:
        print("NO")