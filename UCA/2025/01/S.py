def dp(i, t, waves,memo):
    if i >= len(waves):
        return 0
    if memo[t] != -1:
        return memo[t]
    if waves[i][0] < t:
        memo[t] = dp(i+1,t,waves, memo)
        return memo[t]
    else:
        memo[t] = max(dp(i+1,waves[i][0]+waves[i][2], waves, memo)+waves[i][1],dp(i+1, t, waves, memo))
        return memo[t]

if __name__ == "__main__":
    n =int(input())
    waves = []
    for i in range(n):
        m,f,w = map(int, input().split())
        waves.append((m,f,w))
    waves.sort()
    memo=[-1 for _ in range(1,100_000_000+9)]
    print(dp(0,0,waves,memo))