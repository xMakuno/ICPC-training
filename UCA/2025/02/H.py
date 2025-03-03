def dp():
    pass
if __name__ == "__main__":
    money = int(input())

    interests = list(map(int, input().split()))
    deposits = list(map(int, input().split()))

    memo = [[0]*(len(deposits)+1)]*(money+1)

    for d in range(1, len(deposits)+1):
        for i in range(1,money+1):

            print(memo[i-1][d], memo[i][d-1], interests[d-1] + memo[i-d][d-1])
            if(deposits[d-1] <= i):
                memo[i][d] = max( max(memo[i-1][d], memo[i-deposits[d-1]][d-1] + interests[d-1]) , memo[i][d-1] )
            else:
                print(memo[i][d])
                memo[i][d] = max(memo[i-1][d], memo[i][d-1])

    print(memo[money][len(deposits)])