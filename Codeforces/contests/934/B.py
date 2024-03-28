def solve():
    n, k = map(int, input().split())
    input()
    l = list(range(1,2*k+1))
    print(*l)
    print(*l)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()