'''
Site: Codeforces
Contest: Codeforces Round 756 Div 3
Link: https://codeforces.com/contest/1611
Problem: C
Topic: constructive algorithms
Elo: 1000
'''
def solve():
    n=input()
    X=list(map(int,input().split()))
    print(-1) if X[0]!=n and X[-1]!=n else print(*X[::-1])

def puta():
    n=int(input())
    A=list(map(int,input().split()))
    print(-1) if A[0]!=n and A[-1]!=n else print(*A[::-1])

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        # solve()
        puta()
