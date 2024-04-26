if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        k, q = map(int, input().split())
        a = list(map(int, input().split()))
        players = list(map(int, input().split()))
        ans = []
        for p in players:
            if a[0] == 1: ans.append(0)
            elif p < a[0]: ans.append(p)
            else: ans.append(a[0]-1)
        print(*ans)