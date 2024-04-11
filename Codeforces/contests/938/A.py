def solve():
    n, a, b = list(map(int, input().split()))
    if n & 1 == 0:
        if a*2 > b:
            # print('even 1')
            return b*(n//2)
        else:
            # print('even 2')
            return a*n
    else:
        if a*2 >= b:
            # print('odd 1')
            return b*(n//2) + a
        else:
            # print('odd 2')
            return a*(n-1) + a

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(solve())