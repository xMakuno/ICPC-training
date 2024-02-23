if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        input()
        chips = [ int(a) for a in input().split(" ")]
        firstChip = chips.index(1)
        lastChip = next(i for i in reversed(range(len(chips))) if chips[i] == 1)
        chips = chips[firstChip:lastChip]
        print(chips.count(0))