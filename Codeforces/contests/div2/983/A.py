t = int(input())
while t:
    t-=1
    n=int(input())
    s = list(map(int, input().split()))
    ones = sum(s)
    zeroes = n-ones
    if ones > n:
        ones=2*n-ones
    print(ones%2,ones)