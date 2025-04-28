t = int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    a = s.count("-")
    b = s.count("_")
    if(a >= 2 and b >= 1):
        if(a%2==0):
            print((a//2)*b*(a//2))
        else:
            print((a//2 +1)*(b)*(a//2))
    else:
        print(0)