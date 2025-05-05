n = int(input())
l = sorted(map(int, input().split()))
f = False
for i in range(n-2):
    if l[i] + l[i+1] > l[i+2]:
        f = True
        break
if f:
    print("YES")
else:
    print("NO")