'''
Site: Codeforces
Contest: Codeforces Round 355 Div 2
Link: https://codeforces.com/contest/677
Problem: A
Topic: implementation, math
Elo: 800
'''
if __name__ == "__main__":
    n, h = [int(x) for x in input().split(" ")]

    width = n

    friends = [int(x) for x in input().split(" ")]

    for friendHeight in friends:
        if(friendHeight > h):
            width += 1
        else:
            continue
    print(width)
    