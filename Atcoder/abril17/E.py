if __name__ == "__main__":
    n,x,m = map(int, input().split())
    pre = []
    cycle = {}
    while True:
        rem = x %m
        if x < m: # Not in the cycle
            pre.append(rem)
        else:
            cycle.append(rem)