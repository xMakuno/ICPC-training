'''
Site: Codeforces
Contest: Codeforces Round 918 Div 2
Link: https://codeforces.com/contest/1915
Problem: A
Topic: bitmasks, implementation
Elo: 800
'''

def bitmask():
    a, b, c = list(map(int, input().split()))
    if a ^ b == 0:
        return c
    elif b ^ c == 0:
        return a
    else:
        return b

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(bitmask())