t = int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    if len(s) == len(set(s)):
        print("YES")
    else:
        print("NO")