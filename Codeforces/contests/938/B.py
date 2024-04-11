'''
Site: Codeforces
Contest: Codeforces Round 938 Div 3
Link: https://codeforces.com/contest/1955
Problem: B
Topic: constructive algorithms, data structures, implementation, sortings
Elo: N/A
'''
def ac(): # AC at 312 ms
    n, c, d = list(map(int, input().split()))
    psq = list(map(int, input().split()))
    psq.sort()
    memo = []
    temp = psq[0]
    for i in range(n):
        memo.append(temp)
        for j in range(n-1):
            temp += d
            memo.append(temp)
        temp = memo[len(memo) - n]
        temp += c
    memo.sort()
    for i in range(len(memo)):
        if memo[i] != psq[i]:
            return "NO"
    return "YES"

def ac2(): # AC at 312 ms with PyPy - at 265 ms with CPython
    n, c, d = list(map(int, input().split()))
    psq = list(map(int, input().split()))
    psq.sort()
    memo = []
    temp = psq[0]
    for i in range(n):
        for j in range(n):
            memo.append(temp + i*c + j*d)
    memo.sort()
    for i in range(len(memo)):
        if memo[i] != psq[i]:
            return "NO"
    return "YES"

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(ac2())