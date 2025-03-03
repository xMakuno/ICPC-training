def gcd(a, b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)

if __name__ == "__main__":
    # print(gcd(12,51))
    T = int(input())
    while T:
        T-=1
        a, b = map(int, input().split())
        s1 = input()
        s2 = input()
        x = int(s1)*(int(("9"*b))) + int(s2)
        y = int("9"*b) * int("1" + ("0"*a))
        thing = gcd(x,y)
        x = x // thing
        y = y // thing
        print(x, y)