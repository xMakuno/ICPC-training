t = int(input())
while t:
    t-=1
    n,k = map(int, input().split())
    arr = list(map(int, input().split()))
    groups = [[] for _ in range(k)]
    for i in range(n):
        groups[arr[i]%k].append(i+1)
    thing = -1
    for i in range(k):
        if len(groups[i]) == 1:
            thing = i
            break
    if thing == -1:
        print("NO")
    else:
        print("YES")
        print(groups[thing][0])