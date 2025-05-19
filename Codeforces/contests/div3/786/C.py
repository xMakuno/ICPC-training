def binexpo(b,p):
    if p == 0:
        return 1
    temp = binexpo(b,p//2)
    temp = temp*temp
    if(p&1):
        temp = temp*b
    return temp


if __name__ == "__main__":
    t=int(input())
    while t:
        t-=1
        s1 = input()
        s2 = input()
        if "a" in s2 and len(s2) > 1:
            print(-1)
        else:
            if s2 == "a":
                print(1)
            else: 
                print((binexpo(2,len(s2))))