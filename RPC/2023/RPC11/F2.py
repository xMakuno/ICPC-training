if __name__ == "__main__":
    d, c, r = [int(a) for a in input().split(" ")]
    tiring = []
    for i in range(c):
        tiring.append(int(input()))

    ans = 0
    for i in range(r):   
        ans += 1
        d += int(input())
    
    for t in tiring:
        if t > d:
            break
        else:
            d = d - t
            ans += 1
    print(ans)
