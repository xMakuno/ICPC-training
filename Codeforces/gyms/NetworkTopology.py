def solve():
    n,m=map(int, input().split())
    inci = [0]*(n+1)
    for i in range(m):
        u,v= map(int, input().split())
        inci[u]+=1
        inci[v]+=1
    inci.sort()
    # print(inci[1:])
    if all(inci[i] == 2 for i in range(1,n+1)):
        print("ring topology")
        return
    elif inci[1] == 1 and inci[2] == 1 and all(inci[i]== 2 for i in range(3,n+1)):
        print("bus topology")
        return
    elif inci[n] == n-1 and all(inci[i] == 1 for i in range(1,m)):
        print("star topology")
        return
    else:
        print("unknown topology")

if __name__ == "__main__":
    solve()