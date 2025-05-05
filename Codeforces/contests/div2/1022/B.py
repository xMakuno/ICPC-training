t = int(input())
while t:
    t-=1
    n,x = map(int, input().split())
    
    ones = bin(x)[2:].count("1")
    left = n - ones
    if ones >= n:
        print(x)
    elif not (n-ones)&1:
        print(x+n-ones) 
    else:
        if x > 1:
            print(x+n-ones+1)
        elif x == 1:
                print(n+3) # quitar 1 colocar 2 2
        else:
            if n == 1:
                print(-1)
            else:
                print(n+3)    