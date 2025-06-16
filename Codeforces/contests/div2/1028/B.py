t=int(input())
while t:
    t-=1
    n = int(input())
    p = list(map(int,input().split()))
    q = list(map(int,input().split()))
    mp = -1
    mpi = -1
    mq = -1
    mqi = -1
    r = []
    for i in range(n):
        if mp < p[i]:
            mpi = i
            mp = p[mpi]
            
        if mq < q[i]:
            mqi = i
            mq = q[mqi]
            
        if mp > mq:
            r.append((2**p[mpi] + 2**q[i-mpi])%998244353)
        elif mp < mq:
            r.append((2**p[i-mqi] + 2**q[mqi])%998244353)
        else:
            if q[i-mpi] > p[i-mqi]:
                r.append((2**p[mpi] + 2**q[i-mpi])%998244353)
            else:
                r.append((2**p[i-mqi] + 2**q[mqi])%998244353)
    print(*r)