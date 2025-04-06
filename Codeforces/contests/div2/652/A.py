import math as m
t = int(input())
while t:
    t-=1
    n = int(input())
    if not (90*n % 360):
        print("YES")
    else:
        print("NO")