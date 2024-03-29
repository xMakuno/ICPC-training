if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        a,b,c = map(int, input().split())
        if a > b or a == b or b == c:
            print("NONE")
        elif b > c:
            print("PEAK")
        elif b < c:
            print("STAIR")