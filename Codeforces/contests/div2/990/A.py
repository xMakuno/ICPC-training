happy = [1]
for i in range(1,100):
    happy.append(happy[-1]+8*i)
sh = set(happy)
# print(sh)
t=int(input())
while t:
    t-=1
    n=int(input())
    arr = list(map(int, input().split()))
    s = 0
    ans=0
    for i in arr:
        s+=i
        if s in sh:
            ans+=1
    print(ans)
