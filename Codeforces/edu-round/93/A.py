t = int(input())
while t:
    t-=1
    n = int(input())
    arr = list(map(int, input().split()))
    if arr[0]+arr[1]<=arr[n-1]:
        print(1,2,n)
    else:
        print(-1)