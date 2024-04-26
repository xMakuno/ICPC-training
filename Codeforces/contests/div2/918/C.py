'''
Site: Codeforces
Contest: Codeforces Round 918 Div 2
Link: https://codeforces.com/contest/1915
Problem: C
Topic: binary search, implementation
Elo: 800
'''
import math
def implementation(): 
    # AC for problem 296ms in PyPy due to math library
    #                171ms in CPython due to math library
    input()
    sum = 0
    for n in input().split():
        sum += int(n)
    if math.sqrt(sum).is_integer():
        print('YES')
    else:
        print('NO')

def bin_search():
    input()
    sum = 0
    for n in input().split():
        sum += int(n)
    l = 1
    r = 1e9
    while( l <= r):
        mid = l + (r - l)//2
        if mid*mid == sum: return "YES"
        if mid*mid > sum: r = mid -1
        else: l =  mid + 1
    return "NO"

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        # implementation()
        #hehe
        print(bin_search())