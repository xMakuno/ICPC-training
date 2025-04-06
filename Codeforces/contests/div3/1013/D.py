t = int(input())
while t:
    t-=1
    n,m,k = map(int, input().split())
    x = 2
    shit = n*(m//(x+1) + (m%(x+1)))*x
    print(shit)