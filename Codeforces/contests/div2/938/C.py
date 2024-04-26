'''
Site: Codeforces
Contest: Codeforces Round 938 Div 3
Link: https://codeforces.com/contest/1955
Problem: C
Topic: greedy, implementation, math
Elo: N/A
'''
from collections import deque
def solve():
    n, k = map(int, input().split())
    ships = deque(map(int, input().split())) 
    ans = 0
    print(ans)

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        solve()