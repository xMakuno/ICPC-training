if __name__ == "__main__":
    t = int(input())
    while t:
        t -=1
        n = int(input())
        xs = list(map(int, input().split()))
        min = 1000
        for i in range(n):
            new_mod = xs[i]