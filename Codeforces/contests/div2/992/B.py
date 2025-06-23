t=int(input())
while t:
    t-=1
    n =int(input())
    i = 1
    while (1 << i) < n:
        i+=1
    print(i)