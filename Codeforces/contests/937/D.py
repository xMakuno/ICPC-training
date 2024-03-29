if __name__ == "__main__": #WA bad implementation
    t = int(input())
    while t:
        t-=1
        num = set(input())
        if '1' in num and '0' in num and len(num) == 2:
            print("YES")
        elif len(num) == 1 and ('1' in num or '0' in num ):
            print("YES")
        else:
            print("NO")