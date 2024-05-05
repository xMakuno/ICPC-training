from collections import Counter

def solve():
    n, k = map(int, input().split())
    c = Counter(map(int, input().split()))
    # print(c)
    if n < k:
        return n
    else:
        for key, value in c.items():
            if value >= k:
                return k-1
        return n
if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(solve())