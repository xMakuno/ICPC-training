'''
Site: Codeforces
Contest: Codeforces Educational Round 165 Div. 2
Link: https://codeforces.com/contest/1969
Problem: A
Topic: graphs, implementation, math
Elo: N/A
'''
for _ in range(int(input())):
    n = int(input())
    p = [int(x) - 1 for x in input().split()]
    ans = 3
    for i in range(n):
        if p[p[i]] == i:
            ans = 2
            break
    print(ans)