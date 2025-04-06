t = int(input())
while t:
    t-=1
    n = int(input())
    s1 = input()
    s2 = input()
    top = 0
    bot = 0
    for i in range(n):
        if i % 2 == 0:
            top += int(s1[i])
            bot += int(s2[i])
        else:
            top += int(s2[i])
            bot += int(s1[i])
    if top <= n//2 and bot <= (n+1)//2:
        print("YES")
    else:
        print("NO")