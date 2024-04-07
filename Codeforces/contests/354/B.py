'''
Site: Codeforces
Contest: Codeforces Round 354 Div 2
Link: https://codeforces.com/contest/676
Problem: B
Topic: math, implementation
Elo: 1500
'''
if __name__ == "__main__":
    n, t = map(int, input().split())
    memo = {0:0}
    for i in range(1,n+1):
        memo.update({(1<<i)-1:int(i*(i+1)/2)})
    print(memo)
    # Use pairs to simulate 