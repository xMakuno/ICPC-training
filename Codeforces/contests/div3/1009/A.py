t = int(input())
while t:
    t-=1
    l,r,u,d = map(int, input().split())
    if l == r and u == d and r == u:
        print("YES")
    else:
        print("NO")