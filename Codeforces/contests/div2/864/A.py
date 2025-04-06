t = int(input())
while t:
    t-=1
    n, m = map(int, input().split())
    x1, y1, x2, y2 = map(int, input().split())
    dr = [1,0,-1,0]
    dc = [0,1,0,-1]
    one = 0
    two = 0
    for i in range(4):
        n_x = x1+dr[i]
        n_y = y1+dc[i]
        # print(f"n_x: {n_x} n_y: {n_y}")
        if n_x >=1 and n_x <= n and n_y >=1 and n_y <= m:
            # print("god")
            one+=1
    for i in range(4):
        n_x = x2+dr[i]
        n_y = y2+dc[i]
        # print(f"n_x: {n_x} n_y: {n_y}")
        if n_x >=1 and n_x <= n and n_y >=1 and n_y <= m:
            # print("god")
            two+=1
    print(min(one, two))