if __name__ == "__main__":
    N = int(input())
    if(N < 9):
        print(N)
    elif((N&1) == 0):
        print(int(N//2))
    lo = 1
    hi = 1e9
    mid = int(int(lo+hi)>>1)
    while lo <= hi:
        print("holi")
        mid = int(int(lo+hi)>>1)
        if(2*mid + 1 == 9):
            print(f"Se cago porque 2*{mid} + 1 == 9")
            break
        elif(2*mid + 1 < 9):
            lo = mid
        else:
            hi = mid
            