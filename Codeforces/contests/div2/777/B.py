t = int(input())
while t:
    t-=1
    n,m=map(int, input().split())
    grid = []
    for i in range(n):
        temp = list(map(int, input()))
        grid.append(temp)
    f = True
    for i in range(n-1):
        for j in range(m-1):
            if grid[i][j] + grid[i+1][j] + grid[i][j+1] + grid[i+1][j+1] == 3:
                f = False
                break
    if f:
        print("YES")
    else:
        print("NO")