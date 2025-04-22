t = int(input())
while t:
    t-=1
    n,m=map(int, input().split())
    matrix = []
    di = [1,0]
    dj = [0,1]
    for i in range(n):
        matrix.append(list(map(int,input())))
    f=True
    for i in range(n):
        for j in range(m):
            # print(i,j)
            if matrix[i][j]==1:
                # print(i,j)
                if all(matrix[i][x] == 1 for x in range(j)) or all(matrix[x][j] == 1 for x in range(i)):
                    continue
                else:
                    # print("fuck")
                    f = False
                    break

        if not f:
            break
    if f:
        print("YES")
    else:
        print("NO")