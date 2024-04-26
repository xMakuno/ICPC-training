'''
Site: Codeforces
Contest: Codeforces Round 354 Div 2
Link: https://codeforces.com/contest/676
Problem: A
Topic: constructive algorithms, implementation
Elo: 800
'''
if __name__ == "__main__":
    n = int(input())
    indexes = []
    for i, num in enumerate(input().split()):
        num = int(num)
        if num == 1  or num == n:
            indexes.append(i)
    print(max(n - 1 - indexes[1], indexes[0] - 0) + indexes[1] - indexes[0])