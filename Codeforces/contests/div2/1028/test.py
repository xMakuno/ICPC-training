from random import randint as ri
t = ri(1,5)
print(t)
while t:
    t-=1
    n = ri(1,15)
    l = []
    for i in range(n):
        l.append(ri(1,5000))
    print(n)
    print(*l)