t = int(input())
while t:
    t-=1
    n, k = map(int, input().split())
    board = sorted(list(map(int, input().split())))
    l = 0
    r = n-1
    score = 0
    while l < r:
        if board[l] + board[r] == k:
            score+=1
            l+=1
            r-=1
        elif board[l] + board[r] > k:
            r-=1
        else:
            l+=1
    print(score)