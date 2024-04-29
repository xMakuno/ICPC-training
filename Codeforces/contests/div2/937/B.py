'''
Site: Codeforces
Contest: Codeforces Round 937 Div 4
Link: https://codeforces.com/contest/1950
Problem: B
Topic: implementation
Elo: 800
'''
numeral = "##"
points = ".."
if __name__ == "__main__":
    checkers = (numeral + points)
    t = int(input())
    while t:
        t-=1
        n = int(input())
        if n == 1:
            print(numeral)
            print(numeral)
        else:
            if n & 1 == 1:
                temp = checkers[::-1]*(n//2)
                for i in range(n):
                    if i & 1 == 0:
                        print(numeral + temp)
                        print(numeral + temp)
                    else:
                        print(points + checkers*(n//2))
                        print(points + checkers*(n//2))
            else:
                temp = checkers[::-1]*(n//2)
                for i in range(n):
                    if i & 1 == 1:
                        print(temp)
                        print(temp)
                    else:
                        print(checkers*(n//2))
                        print(checkers*(n//2))