'''
Site: Codeforces
Contest: Codeforces Educational Round 165 Div. 2
Link: https://codeforces.com/contest/1969
Problem: B
Topic: constructive algorithms, greedy
Elo: N/A
'''
def solve():
    s = input()
    s = [int(i) for i in s]
    z = s.count(0)
    memo = [0,0]
    ans = 0
    for c in s:
        memo[c]+=1
        if c == 0:
            ans+= 1 if memo[1] > 0 else 0
        else:
            ans+= z - memo[0]
    print(ans)

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        solve()