def solve():
    n = input()
    memo = {}
    for i in input().split():
        memo[i] = memo[i] + 1 if i in memo else 1
    for i in memo:
        # print(memo[i])
        if memo[i] % 3:
            return True
    return False

if __name__ == "__main__":
    if solve():
        print('Y')
    else:
        print('N')