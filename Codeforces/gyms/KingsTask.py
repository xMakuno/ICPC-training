n = int(input())
p = [i for i in range(1,2*n+1)]
# print(p)
l = list(map(int, input().split()))
c = l.copy()
flag = False
tries = 0
while True:
    if c == p:
        flag = True
        break
    if tries != 0 and l == c:
        # print(tries)
        # print(l)
        # print(c)
        # print("what")
        break
    tries+=1
    # print(tries)
    if tries % 2 == 1:
        for i in range(0,2*n-1,2):
            c[i],c[i+1] = c[i+1],c[i]
    else:
        for i in range(n):
            c[i], c[n+i] = c[n+i],c[i]
tries2 = 0
c = l.copy()
flag2 = False
while True and flag:
    if c == p:
        flag2 = True
        break
    if tries2 != 0 and l == c:
        # print(tries2)
        # print(l)
        # print(c)
        # print("what")
        break
    tries2+=1
    # print(tries)
    if tries2 % 2 == 0:
        for i in range(0,2*n-1,2):
            c[i],c[i+1] = c[i+1],c[i]
    else:
        for i in range(n):
            c[i], c[n+i] = c[n+i],c[i]

if flag:
    if flag2:
        print(min(tries,tries2))
    else:
        print(tries)
else:
    print(-1) 

