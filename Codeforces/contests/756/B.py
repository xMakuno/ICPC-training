'''
Site: Codeforces
Contest: Codeforces Round 756 Div 3
Link: https://codeforces.com/contest/1611
Problem: B
Topic: constructive algorithms, math
Elo: 800
'''
import math
def solve():
    a, b = list(map(int, input().split()))
    return min(a,min(b, (a+b)//2))

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(solve())
