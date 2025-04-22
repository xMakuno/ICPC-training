t = int(input())
while t:
    t-=1
    grid = []
    for i in range(8):
        grid.append(input())
    word = ""
    for i in range(8):
        for j in range(8):
            if grid[i][j] != ".":
                word += grid[i][j]
    print(word)