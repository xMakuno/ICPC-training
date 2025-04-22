n, k = map(int, input().split())
l = list(map(int, input().split()))
mn = 1_000_000_000_000+1
mx = -1_000_000_000_000-1
for i in l:
    mx = max(mx, i)
    mn = min(mn, i)
if k > 1:
    print(mx)
else:
    print(mn)