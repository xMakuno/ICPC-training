def solve():
    n, k = map(int, input().split())
    if k >= n -1:
        print(1)
    else: 
        print(n)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()