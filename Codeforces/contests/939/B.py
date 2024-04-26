if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        n = int(input())
        memo = {}
        ans = 0
        for card in input().split(" "):
            card = int(card)
            if card not in memo:
                memo[card] = 1
            else:
                ans +=1
        print(ans)