t = int(input())
while t:
    t-=1
    n, m = map(int, input().split())
    cows = []
    for i in range(n):
        c = sorted(list(map(int, input().split())))
        cows.append([i+1, c])
    cows.sort(key=(lambda x: x[1][0]))
    flag = True
    for i in range(n):
        for j in range(m):
            if j == m-1 and i == n-1:
                continue
            elif i == n-1:
                if cows[i][1][j] > cows[0][1][j+1]:
                    flag = False
                    break
            else:
                if cows[i][1][j] > cows[i+1][1][j]:
                    flag = False
                    break
                
    if not flag:
        print(-1)
    else:
        print(*[id for id, cards in cows])
