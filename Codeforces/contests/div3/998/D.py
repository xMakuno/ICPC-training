t = int(input())
while t:
    t-=1
    n = int(input())
    l = list(map(int, input().split()))
    j = 0
    for i in range(1,n):
        if l[i-1] > l[i]:
            j=i
    if j == 0:
        print("YES")
    