if __name__ == "__main__":
    n,x,m = map(int, input().split())
    pre = set({})
    cycle = set({})
    i=0
    while True:
        rem = x % m
        if rem not in pre: pre.add(rem)
        else:
            if rem not in cycle:
                cycle.add(rem)
            else:
                break
        print(rem)
        x = x**2
    cyclic_remainders = n - len(pre)
    ans = 0
    leftovers = cyclic_remainders % len(cycle)
    ans += sum(pre)
    ans += sum(cycle)*cyclic_remainders//len(cycle)        
    for i in range(leftovers): ans += cycle[i]
    print(ans)