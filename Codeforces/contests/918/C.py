'''
Site: Codeforces
Contest: Codeforces Round 918 Div 2
Link: https://codeforces.com/contest/1915
Problem: C
Topic: binary search, implementation
Elo: 800
'''
import math
def implementation(): #AC for problem 296ms
    input()
    sum = 0
    for n in input().split():
        sum += int(n)
    if math.sqrt(sum).is_integer():
        print('YES')
    else:
        print('NO')

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        implementation()