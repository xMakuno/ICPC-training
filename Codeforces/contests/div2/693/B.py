'''
Site: Codeforces
Contest: Codeforces Round 693 Div 3
Link: https://codeforces.com/problemset/problem/1472/B
Problem: B
Topic: dp, greedy, math
Elo: 800
'''

def solve(): #AC for B
    n = input()
    memo = {1:0, 2:0}
    for c in input().split():
        memo[int(c)] += 1
    
    if memo[1] & 1 == 1 and memo[2] & 1 == 1: # both odd
        return "NO"
    elif memo[1] & 1 == 0 and memo[2] & 1 == 0: # both even
        if memo[1] > 0 and memo[2] > 0:
            return "YES"
        elif memo[1] >= 0:
            return "YES"
        else:
            return "NO"
    else:
        if memo[2] & 1 == 1 and memo[1] > 0:
            return "YES"
        else:
            return "NO"


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        print(solve())