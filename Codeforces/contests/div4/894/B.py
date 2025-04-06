t = int(input())
while t:
    t-=1
    input()
    s = input()
    d = {"L":-1, "R":1, "U":1, "D":-1}
    x = 0
    y = 0
    flag = False
    for c in s:
        if c == "L" or c == "R":
            x+=d[c]
        else:
            y+=d[c]
        if x == 1 and y == 1:
            flag = True
            break
    if flag:
        print("YES")
    else:
        print("NO")