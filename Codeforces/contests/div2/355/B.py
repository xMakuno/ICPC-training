'''
Site: Codeforces
Contest: Codeforces Round 355 Div 2
Link: https://codeforces.com/contest/677
Problem: A
Topic: implementation, math
Elo: 800
'''
if __name__ == "__main__": # WA 
    n, h, k = map(int, input().split())
    pots = list(map(int, input().split()))[::-1]
    # pots = list(map(int, input().split()))
    pload = 0
    ans = 0
    while pots:
        print(f'last potato: {pots[-1]} pload: {pload}')
        if pots[-1] + pload <= h:
            pload += pots.pop()
        pload -= k
        if pload < 0:
            pload = 0
        ans +=1
    while pload > 0:
        pload -= k
        ans +=1
    print(ans)