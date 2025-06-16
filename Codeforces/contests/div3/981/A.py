from math import ceil, sqrt
t = int(input())
while t:
    t-=1
    n = int(input())
    if n & 1:
        print("Kosuke")
    else:
        print("Sakurako")