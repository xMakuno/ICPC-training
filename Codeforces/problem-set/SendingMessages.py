def solve():
    n, f, a, b = [int(x) for x in input().split(" ")]   
    array = [int(x) for x in input().split(" ")]
    array[0:0] = [0]
    total = 0
    for i in range(n):
        cost = (array[i+1] - array[i]) * a
        if cost < b:
            total += cost
        else:
            total += b
    if total < f:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()