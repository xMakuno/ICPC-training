t = int(input())
queries = []
mx_q = -1
for i in range(t):
    n=int(input())
    queries.append(n)

ans = [i for i in range(1,500000+1)]
ex = [1, 8, 49, 288, 1681, 9800, 57121, 332928]

for d in ex:
    ans[d], ans[d-1] = ans[d-1], ans[d]

for q in queries:
    # s = q*(q+1)//2
    if  q in ex:
        print(-1)
    else:
        print(*ans[:q])
