t = int(input())
while t:
    t-=1
    s = input()
    # print(s)
    cnt = s.count("1100")
    q = int(input())
    for i in range(q):
        x, v = map(int, input().split())
        x-=1
        