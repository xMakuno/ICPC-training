if __name__ == "__main__":
    n, m = map(int, input().split())
    balls = list(map(int, input().split()))
    for i in input().split():
        c = 0
        i = int(i)
        hand = balls[i]
        balls[i] = 0
        while hand:
            hand-=1
            c+=1
            balls[(i + c)%n]