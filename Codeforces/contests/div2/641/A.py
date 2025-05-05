t = int(input())
while t:
    t-=1
    n,k=map(int, input().split())
    if n % 2 == 0:
        print(n+2*k)
    else:
        i=3
        prime = True
        while i*i <=n:
            if n % i == 0:
                prime = False
                break
            i+=2
        # print(n, i)
        if prime:
            print(2*n+(k-1)*2)
        else:
            print(n+i+(k-1)*2)