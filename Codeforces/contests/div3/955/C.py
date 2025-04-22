def solve(a, x):
    n = len(a)
    t_s = sum(a)
    j=0
    ans=0
    for i in range(n-1,-1,-1):
        while j < n and t_s - a[i] - a[j] >= x:
            j+=1
        ans += n-j            
    for i in range(n):
        if t_s - a[i] - a[i] < x:
            ans-=1
    return ans//2

t = int(input())
while t:
    t-=1
    n,l,r = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    print(solve(arr, r+1)  - solve(arr, l))