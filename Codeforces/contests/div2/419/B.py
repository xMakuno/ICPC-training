'''
Site: Codeforces
Contest: Codeforces Round 419 Div 2
Link: https://codeforces.com/contest/816
Problem: B
Topic: binary search, data structures, implementation
Elo: 1000
'''

import sys
 
def solve():
    input = sys.stdin.readline # input is 10 times faster 
    print = sys.stdout.write
 
    n, k, q = map(int, input().split())
    recipes = [0] * (200000 + 2)
    res = []
    
    for _ in range(n):
        l, r = map(int, input().split())
        recipes[l] += 1
        recipes[r+1] -= 1
    
    for i in range(1, len(recipes)):
        recipes[i] += recipes[i-1]
    
    for i in range(1, len(recipes)):
        recipes[i] = 1 if recipes[i] >= k else 0
        recipes[i] += recipes[i-1]
    
    for _ in range(q):
        a, b = map(int, input().split())
        res.append((recipes[b] - recipes[a-1]))
    
    print('\n'.join(map(str, res)))
 
if __name__ == "__main__":
    solve()