def comp(pair):
    return pair[1]

if __name__ == "__main__":
    T = int(input())
    while T:
        T -= 1
        N = int(input())
        pairs = []
        for i in range(N):
            p, s = map(int, input().split())
            pairs.append([p,s])
        pairs.sort(key=comp, reverse=True)
        print(pairs)