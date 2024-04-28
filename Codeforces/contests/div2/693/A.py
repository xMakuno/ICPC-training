if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        w, h, n = map(int, input().split())
        print(bin(w*h),bin(-w*h))
        if n == 1:
            print("YES")
        elif w & 1 == 0 or h & 1 == 0:
            if w*h >= n:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")