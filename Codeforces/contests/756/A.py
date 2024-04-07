'''
Site: Codeforces
Contest: Codeforces Round 756 Div 3
Link: https://codeforces.com/contest/1611
Problem: A
Topic: binary search, constructive algorithms, math
Elo: 800
'''
def solve(): #AC - 108ms
    n = list(map(int, [*input()]))
    if n[-1] & 1 == 0:
        return 0
    elif n[0] & 1 == 0:
        return 1
    idx = next((x for x in n if x & 1 == 0),0)
    if idx != 0:
        return 2
    else:
        return -1

def optimized(): #AC - 77ms
    n = input()
    if int(n[-1]) & 1  == 0:
        return 0
    elif int(n[0]) & 1 == 0:
        return 1
    for num in n:
        if int(num) & 1 == 0:
            return 2
    return -1

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(optimized())