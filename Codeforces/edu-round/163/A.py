def solve():
    n, m, k = map(int, input().split())
    if n == 1:
        print("NO")
    elif m <= k:
        print("NO")
    elif n <= k:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        solve()
